/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:32:12 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/16 12:11:46 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}


Weapon::~Weapon()
{

}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType(void)
{
	std::string &ref_type(type);
	return (ref_type);
}
