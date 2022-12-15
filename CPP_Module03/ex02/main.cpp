/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:46:51 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/26 14:59:16 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap test;
	FragTrap Josh("BB-8");

	test.attack("C3-PO");
	Josh.takeDamage(30);
	test = Josh;
	test.attack("C3-PO");
	Josh.highFivesGuys();

	return (0);
}
