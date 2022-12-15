/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:09:54 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/15 13:47:16 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*zombie;

	std::cout << "A zombie" << std::endl;
	zombie = newZombie("Bernard");
	zombie->announce();
	delete zombie;
	std::cout << "A chump" << std::endl;
	randomChump("Gerard");
	return (0);
}
