/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:28:44 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/22 22:41:55 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = obj;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain Copy assignment called" << std::endl;
    if (this != &obj)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    return (*this);
}

void Brain::addIdea(std::string idea, int index)
{
    this->ideas[index] = idea;
}

void Brain::tellIdea()
{
    for (int i = 0; i < 100; i++)
    {
        if (!ideas[i].empty())
            std::cout << ideas[i] << std::endl;
    }
}
