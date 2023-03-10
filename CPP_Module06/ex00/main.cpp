/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:18:10 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/10 10:14:02 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1 || argc > 2)
		return (1);
	try
	{
		ScalarConversion test(argv[1]);
		std::cout << test << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
