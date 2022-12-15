/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:46:51 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/28 10:49:17 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap test;
	DiamondTrap Josh("L3-37");

	test.attack("L3-37");
	Josh.takeDamage(30);
	test.guardGate();
	Josh.highFivesGuys();
	test = Josh;
	test.attack("L3-37");
	test.whoAmI();

	return (0);
}
