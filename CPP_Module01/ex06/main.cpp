/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:01:01 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/17 17:06:06 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "One argument is required" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
