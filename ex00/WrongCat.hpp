/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:11:57 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/22 20:19:18 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
    WrongCat();
    WrongCat(const WrongCat &obj);
    ~WrongCat();
    
    WrongCat &operator=(const WrongCat &obj);

    std::string getType() const;
    void makeSound() const;
};

#endif