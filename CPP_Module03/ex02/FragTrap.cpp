/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:30:18 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/26 14:58:56 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructor and Destructor */

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "Greetings human im " << _name << " the FragTrap" << std::endl; 
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "Greetings human im " << _name << " the FragTrap" << std::endl; 
}

FragTrap::FragTrap(const FragTrap& toCopy) : ClapTrap(toCopy)
{
	std::cout << "Greetings human im " << _name << " the other FragTrap" << std::endl; 
	*this = toCopy;
}

FragTrap::~FragTrap()
{
	std::cout << "Adios human, " << _name << " has been destroyed" << std::endl;
}

/* Member Function */
/* --  Public  -- */

void	FragTrap::highFivesGuys()
{
	std::cout << _name << " is proposing a high fives" << std::endl;
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

FragTrap& FragTrap::operator=(const FragTrap& toCopy)
{
	if (&toCopy == this)
		return (*this);
	_name = toCopy._name;
	_hitPoint = toCopy._hitPoint;
	_energyPoint = toCopy._energyPoint;
	_attackDamage = toCopy._attackDamage;
	return (*this);
}
