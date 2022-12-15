/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:21:54 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/16 14:24:52 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	public:

	~HumanB();
	HumanB(std::string);

	void	attack(void);
	void	setWeapon(Weapon &weapon);

	private:

	HumanB();
	Weapon *weapon;
	std::string name;
};

#endif
