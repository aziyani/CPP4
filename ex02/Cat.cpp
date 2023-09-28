/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:49 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/22 17:18:08 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default construcot called" << std::endl;
    mind = new Brain();
}

Cat::Cat(const Cat &obj) : Animal()
{
    std::cout << "Cat Copy construcot called" << std::endl;
    mind = new Brain();
    *this = obj;
}

Cat::Cat(const Brain &src)
{
    this->mind = new Brain(src);
}

Cat::~Cat()
{
    std::cout << "Cat Destrucot called" << std::endl;
    delete mind;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Copy assignmentcalled" << std::endl;
    if (this != &obj)
    {
        *this->mind = *obj.mind;
    }
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

void Cat::setBrain(const Brain &src)
{
    *this->mind = src;
}

void Cat::tellIdeas()
{
    this->mind->tellIdea();
}