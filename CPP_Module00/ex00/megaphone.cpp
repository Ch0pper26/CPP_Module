/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:05:54 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/04 18:25:56 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			for (int j = 0 ; argv[i][j] ; j++)
				std::cout << (char)std::toupper(argv[i][j]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
