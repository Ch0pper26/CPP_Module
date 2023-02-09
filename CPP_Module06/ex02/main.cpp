/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:47:44 by eblondee          #+#    #+#             */
/*   Updated: 2023/01/10 13:52:55 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	int random = rand() % 3;

	if (random == 0)
		return (new A);
	if (random == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Pointer A class" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Pointer B class" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Pointer C class" << std::endl;
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "Reference A class" << std::endl;
	}
	catch (const std::exception& e)
	{
	}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "Reference B class" << std::endl;
	}
	catch (const std::exception& e)
	{
	}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "Reference C class" << std::endl;
	}
	catch (const std::exception& e)
	{
	}
}

int	main(void)
{
	srand(time(0));
	Base *ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete (ptr);

	std::cout << std::endl;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete (ptr);

	std::cout << std::endl;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete (ptr);
}
