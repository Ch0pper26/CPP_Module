/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:04:47 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/26 13:35:40 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& toCopy);
	~ClapTrap(void);

	ClapTrap& operator=(const ClapTrap& toCopy);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	protected:

	int			_hitPoint;
	int			_energyPoint;
	int			_attackDamage;
	std::string _name;

};

#endif
