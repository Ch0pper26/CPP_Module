/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:52:55 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 11:26:06 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
	public:

	AMateria(void);
	AMateria(const AMateria& toCopy);
	AMateria(std::string const & type);
	virtual ~AMateria(void);

	AMateria& operator=(const AMateria& toCopy);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	protected:

	std::string _type;
};

#endif
