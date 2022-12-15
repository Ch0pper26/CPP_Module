/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:43:41 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/30 11:02:53 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Constructor and Destructor */

Animal::Animal(void)
{
	std::cout << "An animal has appeared" << std::endl;
	type = "Animal";
}

Animal::Animal(const Animal& toCopy)
{
	std::cout << "An other animal has appeared" << std::endl;
	*this = toCopy;
}

Animal::~Animal(void)
{
	std::cout << "An animal has disappeared" << std::endl;
}


/* Member Function */
/* --  Public  -- */

std::string	Animal::getType(void) const
{
	return (type);
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

Animal& Animal::operator=(const Animal& toCopy)
{
	if (this == &toCopy)
		return (*this);
	type = toCopy.type;
	return (*this);
}
