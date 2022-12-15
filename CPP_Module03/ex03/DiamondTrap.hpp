/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:37:53 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/26 17:59:07 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& toCopy);
	~DiamondTrap(void);

	DiamondTrap& operator=(const DiamondTrap& toCopy);

	void	attack(const std::string& target);
	void	whoAmI();

	private:

	std::string _name;	
};

#endif
