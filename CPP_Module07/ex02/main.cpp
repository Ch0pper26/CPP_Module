/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:06:49 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/11 14:18:20 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	unsigned int i = 0;
	Array<int>	a(3);

	std::cout << "Int :" << std::endl;

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	try
	{
		a[3] = 4;
	}
	catch (std::exception const &e)
	{
		std::cout << "Impossible operation" << std::endl;
	}
	Array<int> b(a);
	while (i < b.size())
	{
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
		std::cout << "b [" << i << "] = " << b[i] << std::endl;
		i++;
	}

	std::cout << "\nChar :" << std::endl;

	i = 0;
	Array<char>	c(3);

	c[0] = 'h';
	c[1] = 'e';
	c[2] = 'l';
	try
	{
		c[3] = 4;
	}
	catch (std::exception const &e)
	{
		std::cout << "Impossible operation" << std::endl;
	}
	Array<char> d(c);
	while (i < d.size())
	{
		std::cout << "c[" << i << "] = " << c[i] << std::endl;
		std::cout << "d [" << i << "] = " << d[i] << std::endl;
		i++;
	}

}
