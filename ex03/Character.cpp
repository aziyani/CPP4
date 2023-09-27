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

Character::Character(std::string _name)
{
	name = _name;
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
			if (rhs.slots[i] != NULL)
			{
				delete this->slots[i];
				this->slots[i] = rhs.slots[i]->clone();
			}
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
	int i;
	for (i = 0; i < 4; i++)
	{
		if (slots[i] == NULL)
		{
			slots[i] = m;
			break ;
		}
	}
	if (i > 3)
		delete m;
	for (int i = 0; i < 4; i++)
	{
		delete temp[i];
		temp[i] = NULL;
	}
}

void Character::unequip(int idx)
{
	if (idx < 4)
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
	for (int i = 0; i < 4; i++)
	{
		delete temp[i];
		temp[i] = NULL;
	}
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