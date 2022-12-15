/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:59:16 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/16 14:12:32 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{

}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
