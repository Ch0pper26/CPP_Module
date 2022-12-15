/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:04:47 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/26 14:11:42 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructor and Destructor */

ClapTrap::ClapTrap(void)
{
	_name = "Clap";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
	std::cout << "Greetings human im " << _name << " the ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
	std::cout << "Greetings human im " << _name << " the ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
	*this = toCopy;
	std::cout << "Greetings human im " << _name << " the other ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "GoodBye human, " << _name << " has been destroyed" << std::endl;
}

/* Member Function */
/* --  Public  -- */

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoint <= 0)
		std::cout << "ClapTrap " << _name << " runs out of energy" << std::endl;
	else if (_hitPoint <= 0)
		std::cout << "ClapTrap " << _name << " can't attack because he/she is too damaged" 
			<< std::endl;
	else if (target == _name)
	{
		std::cout << "ClapTrap " << _name << " attacks him/herself, causing "
			<< _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		std::cout << "Remaining energy points : " << _energyPoint << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		std::cout << "Remaining energy points : " << _energyPoint << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " is taking " << amount << " points of damage!"
		<< std::endl;
	_hitPoint -= amount;
	if (_hitPoint >= 0)
		std::cout << "Remaining hit points : " << _hitPoint << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has been overkill" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint <= 0)
		std::cout << "ClapTrap " << _name << " runs out of energy" << std::endl;
	else if (_hitPoint <= 0)
		std::cout << "ClapTrap " << _name << " can't attack because he/she is too damaged" 
			<< std::endl;
	else if ((amount + _hitPoint) > 10)
		std::cout << "ClapTrap " << _name << " can't be repaired over 10 hit points"
			 << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " is repairing " << amount << " hit points !"
			<< std::endl;
		_hitPoint += amount;
		_energyPoint--;
		std::cout << "Remaining hit points : " << _hitPoint << std::endl;
		std::cout << "Remaining ernegy points : " << _energyPoint << std::endl;
	}
}

/* --  Private  -- */

/* Nothing */

/* Operator */
/* -- Asssigment -- */

ClapTrap& ClapTrap::operator=(const ClapTrap& toCopy)
{
	if (&toCopy == this)
		return (*this);
	std::cout << _name << " become " << toCopy._name << std::endl;
	_name = toCopy._name;
	_hitPoint = toCopy._hitPoint;
	_energyPoint = toCopy._energyPoint;
	_attackDamage = toCopy._attackDamage;
	return (*this);
}
