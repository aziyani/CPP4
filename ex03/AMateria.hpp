/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:17:04 by aziyani           #+#    #+#             */
/*   Updated: 2023/09/27 10:08:42 by aziyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;

	public:

		AMateria();
		AMateria(AMateria const &obj);
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria &		operator=( AMateria const & rhs );

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target) = 0;
};

#endif /* ******************************************************** AMATERIA_H */