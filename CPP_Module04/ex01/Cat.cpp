/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:29:59 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/30 10:11:27 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor and Destructor */

Cat::Cat(void) : Animal()
{
	std::cout << "An cat has appeared" << std::endl;
	_brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat& toCopy) : Animal(toCopy)
{
	std::cout << "An another cat has appeared" << std::endl;
	_brain = NULL;
	*this = toCopy;
}

Cat::~Cat(void)
{
	delete _brain;
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
	delete _brain;
	_brain = new Brain(*(toCopy._brain));
	type = toCopy.type;
	return (*this);
}
