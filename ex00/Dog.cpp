/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:31 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 17:19:10 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{   
    std::cout << "Default Dog constructo called" << std::endl;   
}

Dog::Dog(const Dog &obj) : Animal()
{
    std::cout << "copy Dog constructor called" << std::endl;
    *this = obj;
}

Dog::~Dog()
{
    std::cout << "Dog destructo called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog assignemet overloaded called" << std::endl;
    this->type = obj.type;
    return (*this);
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}