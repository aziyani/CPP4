/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:49 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 17:12:44 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Default WrongCat constructo called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj): WrongAnimal() // its nessecry to call the parent class in the copy constructor manually
{
    std::cout << "copy WrongCat constructo called" << std::endl;
    *this = obj;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructo called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat assignemet overloaded call" << std::endl;
    this->type = obj.type;
    return (*this);
}

std::string WrongCat::getType() const
{
    return (this->type);
}

void WrongCat::makeSound() const
{
    std::cout << "Meoooow" << std::endl;
}