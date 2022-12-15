/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:30:18 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/26 14:55:24 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
	public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& toCopy);
	~ScavTrap(void);

	ScavTrap& operator=(const ScavTrap& toCopy);

	void	guardGate(void);
	void	attack(const std::string& target);

	private:

};

#endif
