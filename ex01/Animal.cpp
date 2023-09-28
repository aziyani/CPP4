/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:01 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 11:41:41 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default construcot called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal Copy construcot called" << std::endl;
    *this = obj;
}

Animal::Animal(const std::string iType)
{
    std::cout << "Animal Param construcot called" << std::endl;
    type = iType;
}

Animal::~Animal()
{
    std::cout << "Animal Destrucot called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "Animal copy assignment called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Generic animal sound" << std::endl;
}