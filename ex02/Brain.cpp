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
    ideas[0] = "Hello";
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
}

Brain::~Brain()
{
    
}

Brain &Brain::operator=(const Brain &obj)
{
    if (this != &obj)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    return (*this);
}