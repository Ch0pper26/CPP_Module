/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:00:45 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/16 13:22:37 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	public:

	~HumanA();
	HumanA(std::string name, Weapon &weapon);

	void	attack(void);

	private:

	HumanA(void);
	Weapon	&weapon;
	std::string name;
};

#endif
