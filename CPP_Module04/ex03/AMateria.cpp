/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:52:55 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 11:28:14 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Constructor and Destructor */

AMateria::AMateria(void)
{
}

AMateria::AMateria(const AMateria& toCopy)
{
	*this = toCopy;
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
}

AMateria::~AMateria(void)
{
}

/* Member Function */
/* --  Public  -- */

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "use" << _type << "at" << target.getName() << std::endl;
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

AMateria& AMateria::operator=(const AMateria& toCopy)
{
	if (this == &toCopy)
		return (*this);
	this->_type = toCopy._type;
	return (*this);
}

