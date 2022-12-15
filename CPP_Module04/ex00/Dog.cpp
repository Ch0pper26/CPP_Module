/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:29:59 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/30 10:05:57 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor and Destructor */

Dog::Dog(void) : Animal()
{
	std::cout << "An dog has appeared" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& toCopy) : Animal(toCopy)
{
	std::cout << "An another dog has appeared" << std::endl;
	*this = toCopy;
}

Dog::~Dog(void)
{
	std::cout << "A dog has disappeared" << std::endl;
}

/* Member Function */
/* --  Public  -- */

void	Dog::makeSound(void) const
{
	std::cout << "Woof-Woof" << std::endl;
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

Dog& Dog::operator=(const Dog& toCopy)
{
	if (this == &toCopy)
		return (*this);
	type = toCopy.type;
	return (*this);
}
