/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:05:22 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/18 11:31:57 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_tab[0] = &Harl::debug;
	_tab[1] = &Harl::info;
	_tab[2] = &Harl::warning;
	_tab[3] = &Harl::error;
}

Harl::~Harl()
{

}

void	Harl::complain(std::string level)
{
	std::string seriousness[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (level == seriousness[i])
			(this->*_tab[i])();
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
