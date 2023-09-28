/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:17:40 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/27 13:32:06 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		slots[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for(int i = 0; i < 4; i++) // copy from src without calling the operator=
	{
		slots[i] = NULL;
		if (src.slots[i])
			this->slots[i] = src.slots[i]->clone();
	}
	// *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		delete slots[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
		{
			delete slots[i];
			slots[i] = NULL;
			if (rhs.slots[i])
				this->slots[i] = rhs.slots[i]->clone();
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m) // fill slots array with m pointer m hold type ice or cure
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (slots[i] && m->getType() == slots[i]->getType()) // delete if it already exists
		{
			// std::cout << "already in register" << std::endl;
			delete m;
			return ;
		}
		else if (slots[i] == NULL) // learn if it doesn't exist
		{
			// std::cout << "learned" << std::endl;
			slots[i] = m;
			return ;
		}
	}
	std::cout << "Warning: Can't learn materia: register full - materia deleted" << std::endl;
	delete m;
}

AMateria *MateriaSource::createMateria(std::string const & type) // check if slots[i] type is equal type param if it true return a copy of it
{
	for (int i = 0; i < 4 && slots[i] != NULL; i++)
	{
		if (slots[i]->getType() == type)
			return (slots[i]->clone());
	}
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */