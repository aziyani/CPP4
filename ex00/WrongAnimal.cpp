/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:01 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 17:11:28 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal constructo called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "copy WrongAnimal constructo called" << std::endl;
    *this = obj;
}

WrongAnimal::WrongAnimal(const std::string iType)
{
    std::cout << "param WrongAnimal constructo called" << std::endl;

    this->type = iType;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructo called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal assignemet overloaded called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Generic WrongAnimal sound" << std::endl;
}