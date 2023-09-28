/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:28:29 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/22 20:52:52 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP


# include <string>
# include <iostream>

class Brain
{
protected:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain &obj);
    ~Brain();
    Brain &operator=(const Brain &obj);
    void addIdea(std::string idea, int index);
    void tellIdea();
};

#endif
