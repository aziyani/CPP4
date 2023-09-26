/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:17:09 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/26 18:59:16 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	for(int i = 0; i < 4; i++)
	{
		slots[i] = NULL;
	}
}

Character::Character( const Character & src )
{
}

Character::Character(std::string _name)
{
	name = _name;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete slots[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (slots[i] == NULL)
			slots[i] = m;
		else if (i == 3 && slots[i] != NULL)
			delete m;
	}
}

void Character::unequip(int idx)
{
	if (idx < 4)
	{
		// save pointer 
		temp[idx] = slots[idx];
		slots[idx] = NULL;
	}
	else
		std::cout << "this index not exist" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4)
	{
		if (slots[idx] != NULL)
			slots[idx]->use(target);
	}
	else
		std::cout << "this index not exist" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */