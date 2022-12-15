/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:09:54 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/15 15:52:12 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(3, "Alphonse");
	for (int i = 0; i < 3; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
