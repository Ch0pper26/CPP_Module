/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:41:45 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/05 11:55:08 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructor and Destructor */

Cure::Cure(void)
{
	_type = "cure";
}

Cure::Cure(const Cure& toCopy) : AMateria(toCopy)
{
	*this = toCopy;
}

Cure::~Cure(void)
{
}

/* Member Function */
/* --  Public  -- */
	
AMateria* Cure::clone() const
{
	AMateria *new_material = new Cure(*this);
	return (new_material);
}

void Cure::use(ICharacter& target)
{
	std::cout << "heals " << target.getName() << "'s wounds" << std::endl;
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

Cure& Cure::operator=(const Cure& toCopy)
{
	if (this == &toCopy)
		return (*this);
	_type = toCopy._type;
	return (*this);
}

