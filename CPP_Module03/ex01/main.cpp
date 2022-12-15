/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:46:51 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/26 14:26:54 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap test;
	ScavTrap Josh("C3-PO");

	test.attack("C3-PO");
	Josh.takeDamage(20);
	test = Josh;
	test.attack("C3-PO");
	Josh.guardGate();

	return (0);
}
