/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:31 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 16:53:40 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal("Dog") // this->type = "Gog", we this "Animal("Dog")" to initialize the type variable;
{
    std::cout << "constructor dog" << std::endl;
    mind = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj.getType()) // its nessecry to call the parent class in the copy constructor manually
{
    mind = new Brain();
    *this = obj;
}

Dog::~Dog()
{
    std::cout << "destructor 999999 dog" << std::endl;

    delete mind;
}

Dog &Dog::operator=(const Dog &obj)
{
    if (this != &obj)
    {
        *this->mind = *obj.mind;
        // std::cout << this->mind << "\c;
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

