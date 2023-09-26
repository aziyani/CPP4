/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:01 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 16:58:34 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
    
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
}

Animal::Animal(const std::string iType)
{
    std::cout << "constructor animal" << std::endl;
    type = iType;
}

Animal::~Animal()
{
    std::cout << "destructor animal" << std::endl;

}

std::string Animal::getType() const
{
    return (this->type);
}

Animal &Animal::operator=(const Animal &obj)
{
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Generic animal sound" << std::endl;
}