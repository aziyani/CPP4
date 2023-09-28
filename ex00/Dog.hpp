/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:17 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/22 11:20:46 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{

public:
    Dog();
    Dog(const Dog &obj);
    ~Dog();
    Dog &operator=(const Dog &obj);
    std::string getType() const;
    void makeSound() const;

};

#endif


// polymorphism in inheritance hwa fach kanchdo refrence wla pointer dyal base class wkan3tiwh lvalue wla l address dyal derived class 
// example :
// Animal *ptr_7ayawan = new Dog();

// Dog zoubir;
// Animal &ref_7ayawan = zoubir;  

// Dog odsnd