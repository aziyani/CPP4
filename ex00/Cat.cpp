/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:49 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 17:12:44 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default Cat constructo called" << std::endl;
}

Cat::Cat(const Cat &obj): Animal()
{
    std::cout << "copy Cat constructo called" << std::endl;
    *this = obj;
}

Cat::~Cat()
{
    std::cout << "Cat destructo called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat assignemet overloaded call" << std::endl;
    this->type = obj.type;
    return (*this);
}

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Meoooow" << std::endl;
}