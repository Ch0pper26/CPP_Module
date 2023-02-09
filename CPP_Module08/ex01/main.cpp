/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:06:49 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/12 18:03:24 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span test;
	Span a(5);

	a.addNumber(60);
	a.addNumber(42);
	a.addNumber(26);
	a.addNumber(20);
	a.addNumber(6);
	try
	{
		a.addNumber(60);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		test.longestSpan();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << a << std::endl;
	std::cout << a.longestSpan() << std::endl;
	std::cout << a.shortestSpan() << std::endl;

	std::vector<int> tmp;

	Span b(10000);
	for (int i = 0; i < 10000; i++)
		tmp.push_back(i);

	try
	{
		a.addNumbers(tmp.begin(), tmp.end());
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() <<std::endl;
	}
	b.addNumbers(tmp.begin(), tmp.end());
	std::cout << b.longestSpan() << std::endl;
	std::cout << b.shortestSpan() << std::endl;

}
