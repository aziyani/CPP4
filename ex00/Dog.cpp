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

Dog::Dog() : Animal("Dog") // this->type = "Gog"
{   
    std::cout << "Default dog constructo" << std::endl;   
}

Dog::Dog(const Dog &obj) : Animal() // its nessecry to call the parent class in the copy constructor manually
{
    *this = obj;
}

Dog::~Dog()
{

}

Dog &Dog::operator=(const Dog &obj)
{
    (void)obj;
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