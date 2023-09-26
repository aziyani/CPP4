/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:10:53 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 17:50:48 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

// cannot creat an object from a abstractor class, but we can pointing to a derived class
// pure vitual function we shouldn't emplement it in base class, but is nessesry to emplement it in derived class
// if we have a 3 member fucntion in a class and at least one pure virtual function or at most 2 pure function from this class is called abstractor class

# include <iostream>
# include <string>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &obj);
    Animal(const std::string iType);
    virtual ~Animal();
    Animal &operator=(const Animal &obj);
    std::string getType() const;
    virtual void    makeSound() const = 0;
};

#endif