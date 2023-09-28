/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:40:04 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 13:59:48 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Brain brain;
    brain.addIdea("node", 0);
    brain.addIdea("takol", 1);
    Cat catt = Cat(brain);
    catt.tellIdeas();
    brain.addIdea("new idea", 2);
    catt.tellIdeas();
    return 0;
}