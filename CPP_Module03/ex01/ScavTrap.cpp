/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:30:18 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/26 16:32:01 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructor and Destructor */

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "Greetings human im " << _name << " the ScavTrap" << std::endl; 
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "Greetings human im " << _name << " the ScavTrap" << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap& toCopy) : ClapTrap(toCopy)
{
	std::cout << "Greetings human im " << _name << " the other ScavTrap" << std::endl; 
	*this = toCopy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Sayonara human, " << _name << " has been destroyed" << std::endl;
}

/* Member Function */
/* --  Public  -- */

void	ScavTrap::guardGate()
{
	std::cout << _name << " is entering in Gate Keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoint <= 0)
		std::cout << "ScavTrap " << _name << " runs out of energy" << std::endl;
	else if (_hitPoint <= 0)
		std::cout << "ScavTrap " << _name << " can't attack because he/she is too damaged"
			<< std::endl;
	else if (target == _name)
	{
		std::cout << "ScavTrap " << _name << " attacks him/herself, causing "
			<< _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		std::cout << "Remaining energy points : " << _energyPoint << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		std::cout << "Remaining energy points : " << _energyPoint << std::endl;
	}
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

ScavTrap& ScavTrap::operator=(const ScavTrap& toCopy)
{
	if (&toCopy == this)
		return (*this);
	_name = toCopy._name;
	_hitPoint = toCopy._hitPoint;
	_energyPoint = toCopy._energyPoint;
	_attackDamage = toCopy._attackDamage;
	return (*this);
}
