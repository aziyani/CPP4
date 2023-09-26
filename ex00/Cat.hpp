/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:57 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/22 20:19:18 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

public:
    Cat();
    Cat(const Cat &obj);
    ~Cat();
    
    Cat &operator=(const Cat &obj);

    std::string getType() const;
    void makeSound() const;
};

#endif