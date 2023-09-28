/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:17:00 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/27 12:45:56 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	std::cout << "Default Constructor called" << std::endl;
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "base class" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &AMateria::getType() const
{
	return (this->type);
}

/* ************************************************************************** */