/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:46:51 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/26 14:08:42 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap test;
	ClapTrap Josh("R2-D2");
	ClapTrap Bob(Josh);

	test.attack("R2-D2");
	Josh.takeDamage(7);
	Josh.beRepaired(6);
	test = Josh;
	test.attack("R2-D2");
	Josh.takeDamage(10);
	Josh.beRepaired(10);

	return (0);
}
