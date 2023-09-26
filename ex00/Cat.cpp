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
    
}

Cat::Cat(const Cat &obj) : Animal() // its nessecry to call the parent class in the copy constructor manually
{
    *this = obj;
}

Cat::~Cat()
{

}

Cat &Cat::operator=(const Cat &obj)
{
    (void)obj;
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