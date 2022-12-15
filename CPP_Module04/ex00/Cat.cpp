/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:29:59 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/30 10:06:09 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor and Destructor */

Cat::Cat(void) : Animal()
{
	std::cout << "An cat has appeared" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& toCopy) : Animal(toCopy)
{
	std::cout << "An another cat has appeared" << std::endl;
	*this = toCopy;
}

Cat::~Cat(void)
{
	std::cout << "A cat has disappeared" << std::endl;
}

/* Member Function */
/* --  Public  -- */

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

Cat& Cat::operator=(const Cat& toCopy)
{
	if (this == &toCopy)
		return (*this);
	type = toCopy.type;
	return (*this);
}
