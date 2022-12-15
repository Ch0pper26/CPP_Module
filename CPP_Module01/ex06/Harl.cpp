/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:05:22 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/18 11:34:50 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void	Harl::complain(std::string level)
{
	int deaf_level;
	std::string deaf_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (deaf_level = 0; deaf_level < 4; deaf_level++)
		if (level == deaf_levels[deaf_level])
				break;
	switch (deaf_level)
	{
		case 0:
			debug();
			info();
			warning();
			error();
			break ;

		case 1:
			info();
			warning();
			error();
			break ;

		case 2:
			warning();
			error();
			break ;

		case 3:
			error();
			break ;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Ha! Over there, there's a bug. Look at this wonderful bug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I don't see any bug, did you see one ?" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think there are some bugs here, look !" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Oh no ! Those bugs are escaping... It's too late, they all have gone away" << std::endl;
}
