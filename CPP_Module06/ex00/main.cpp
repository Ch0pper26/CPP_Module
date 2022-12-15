/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:18:10 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/14 13:47:23 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	try
	{
		ScalarConversion test(argv[1]);
	}
	catch (const std::exception& e)
	{
		std::cout << "Error : Impossible Conversion" << std::endl;
	}
//	std::cout << ScalarConversion::floatConversion(argv[1]) << std::endl;
	return (0);
}
