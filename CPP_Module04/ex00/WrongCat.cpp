/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:40:06 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/30 10:06:42 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Constructor and Destructor */

WrongCat::WrongCat(void)
{
	std::cout << "A WrongCat has appeared" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& toCopy) : WrongAnimal(toCopy)
{
	std::cout << "An other WrongCat has appeared" << std::endl;
	*this = toCopy;
}

WrongCat::~WrongCat(void)
{
	std::cout << "A  WrongCat has disappeared" << std::endl;
}

/* Member Function */
/* --  Public  -- */

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

WrongCat& WrongCat::operator=(const WrongCat& toCopy)
{
	if (this == &toCopy)
		return (*this);
	type = toCopy.type;
	return (*this);
}

