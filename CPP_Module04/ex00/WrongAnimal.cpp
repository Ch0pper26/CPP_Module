/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:31:48 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/29 12:01:46 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Constructor and Destructor */

WrongAnimal::WrongAnimal(void)
{
	std::cout << "A Wrong animal has appeared" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy)
{
	std::cout << "An other animal has appeared" << std::endl;
	*this = toCopy;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "A Wrong animal has disappeared" << std::endl;
}

/* Member Function */
/* --  Public  -- */

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[Inaudible wrong animal noise]" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& toCopy)
{
	if (this == &toCopy)
		return (*this);
	type = toCopy.type;
	return (*this);
}
