/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:21:54 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/16 14:38:16 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::HumanB(std::string name)
{
	weapon = NULL;
	this->name = name;
}

HumanB::~HumanB()
{

}

void	HumanB::attack(void)
{
	if (weapon == NULL)
		std::cout << name << " can't attack" << std::endl;
	else	
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
