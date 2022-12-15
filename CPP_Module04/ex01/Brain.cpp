/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:07:49 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/29 15:58:13 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructor and Destructor */

Brain::Brain(void)
{
	std::cout << "Im a brain" << std::endl;
}

Brain::Brain(const Brain& toCopy)
{
	std::cout << "Im an other brain" << std::endl;
	*this = toCopy;
}

Brain::~Brain(void)
{
	std::cout << "I lost my mind" << std::endl;
}

/* Member Function */
/* --  Public  -- */

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

Brain& Brain::operator=(const Brain& toCopy)
{
	if (this == &toCopy)
		return (*this);
	for (int i = 0; i < 100; i++)
		ideas[i] = toCopy.ideas[i];
	return (*this);
}

