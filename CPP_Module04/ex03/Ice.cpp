/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:12:39 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 11:32:27 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Constructor and Destructor */

Ice::Ice(void)
{
	_type = "ice";
}

Ice::Ice(const Ice& toCopy) : AMateria(toCopy)
{
	*this = toCopy;
}

Ice::~Ice(void)
{
}

/* Member Function */
/* --  Public  -- */
	
AMateria* Ice::clone() const
{
	AMateria* new_materia = new Ice(*this);
	return (new_materia);
}

void Ice::use(ICharacter& target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

Ice& Ice::operator=(const Ice& toCopy)
{
	if (this == &toCopy)
		return (*this);
	_type = toCopy._type;
	return (*this);
}

