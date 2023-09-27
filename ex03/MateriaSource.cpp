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
	*this = src;
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

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs ) // ????????
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
			this->slots[i] = rhs.slots[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m) // fill slots array with m pointer m hold type ice or cure
{
	int i;
	for(i = 0; i < 4 && slots[i] != NULL; i++);
	if (i == 3 && slots[i] != NULL)
	{
		delete m;
		return ;
	}
	slots[i] = m;

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