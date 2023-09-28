/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:10:53 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/24 16:38:42 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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