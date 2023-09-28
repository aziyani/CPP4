/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:16:41 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/27 13:28:32 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "MateriaSource.hpp"
# include "Character.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

void    init()
{
    IMateriaSource* src = new MateriaSource();
    IMateriaSource* sr = new MateriaSource();
    
    src = sr;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    ICharacter* m = new Character("m");
    AMateria* tmp;
    
    me = m;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    // delete m;
    delete src;
}

int main()
{
    // init();

    IMateriaSource* ms = new MateriaSource();
    std::cout << "here" << std::endl;
    ms->learnMateria(new Ice());
    ms->learnMateria(new Ice());



    return 0;
}