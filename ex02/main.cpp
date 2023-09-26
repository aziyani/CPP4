/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:40:04 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 22:16:40 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal *Animals[10];
    // for (int i = 0; i < 5; i++)
    // {
    //     Animals[i] = new Dog();
    // }
    // for (int i = 5; i < 10; i++)
    // {
    //     Animals[i] = new Cat();
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     Animals[i]->makeSound();
    //     delete Animals[i];
    // }
    // const Dog test;
    Animal *huski = new Dog();
    // huski->makeSound();
    delete huski;
    
    return 0;
}
