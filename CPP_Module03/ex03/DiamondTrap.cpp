/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:37:53 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/28 11:32:54 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Constructor and Destructor */

DiamondTrap::DiamondTrap(void) : ClapTrap("Clap_clap_name")
{
	this->_name = "Clap";
	this->FragTrap::_hitPoint = 100;
	this->ScavTrap::_energyPoint = 50;
	this->FragTrap::_attackDamage = 30;
	std::cout << "Greetings human im " << _name << " the DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->FragTrap::_hitPoint = 100;
	this->ScavTrap::_energyPoint = 50;
	this->FragTrap::_attackDamage = 30;
	std::cout << "Greetings human im " << _name << " the DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy) : ClapTrap(toCopy),
ScavTrap(), FragTrap()
{
	*this = toCopy;
	std::cout << "Greetings human im " << _name << " the other DiamonTrap" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Ciao human, " << _name << " has been destroyed" << std::endl;
}

/* Member Function */
/* --  Public  -- */

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << _name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& toCopy)
{
	if (&toCopy == this)
		return (*this);
	ClapTrap::operator=(toCopy);
	_name = toCopy._name;
	_hitPoint = toCopy._hitPoint;
	_energyPoint = toCopy._energyPoint;
	_attackDamage = toCopy._attackDamage;
	return (*this);
}

