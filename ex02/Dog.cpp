/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:31 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/23 11:19:54 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal("Dog") // this->type = "Gog", we this "Animal("Dog")" to initialize the type variable;
{
    std::cout << "Brain Default construcot called" << std::endl;
    mind = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj.getType()) // its nessecry to call the parent class in the copy constructor manually
{
    std::cout << "Dog Copy construcot called" << std::endl;
    mind = new Brain();
    *this = obj;
}

Dog::~Dog()
{
    std::cout << "Dog Destrucot called" << std::endl;
    delete mind;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Copy assignment called" << std::endl;
    if (this != &obj)
    {
        *this->mind = *obj.mind;
    }
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

