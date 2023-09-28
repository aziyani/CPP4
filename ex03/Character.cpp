/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:17:09 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/27 15:14:13 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	for (int i = 0; i < 4; i++)
	{
		slots[i] = NULL;
		temp[i] = NULL;
	}
}

Character::Character(const Character &src)
{
	for (int i = 0; i < 4; i++)
	{
		slots[i] = NULL;
		temp[i] = NULL;
	}
	*this = src;
}

Character::Character(const std::string& _name) : name(_name)
{
	for (int i = 0; i < 4; i++)
	{
		slots[i] = NULL;
		temp[i] = NULL;
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	empty_temp();
	for (int i = 0; i < 4; i++)
		delete slots[i];
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;

		for (int i = 0; i < 4; i++)
		{
			delete this->slots[i];
			this->slots[i] = NULL;
			if (rhs.slots[i] != NULL)
				this->slots[i] = rhs.slots[i]->clone();
		}

		for (int i = 0; i < 4; i++)
		{
			delete temp[i];
			temp[i] = NULL;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	empty_temp();

	for (int i = 0; i < 4; i++)
	{
		if (slots[i] == NULL) // if there is a slot put it in it.
		{
			slots[i] = m;
			return ;
		}
	}

	// delete if there is no slot to put the materia in.
	delete m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (slots[idx] != NULL)
			temp[idx] = slots[idx];
		slots[idx] = NULL;
	}
	else
		std::cout << "this index not exist" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	empty_temp();

	if (idx < 4)
	{
		if (slots[idx] != NULL)
			slots[idx]->use(target);
	}
	else
		std::cout << "this index not exist" << std::endl;
}

void Character::empty_temp( void )
{
	for (int i = 0; i < 4; i++)
	{
		delete temp[i];
		temp[i] = NULL;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */