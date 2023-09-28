/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:17:13 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/27 10:46:30 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class AMateira;

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *slots[4];
		AMateria *temp[4];

		void	empty_temp( void );

	public:
		Character();
		Character(const std::string& _name);
		Character( Character const & src );
		~Character();
		Character&		operator=( Character const & rhs );

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);


};

#endif /* ******************************************************* CHARACTER_H */