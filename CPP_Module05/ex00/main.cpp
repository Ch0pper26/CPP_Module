/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:05:04 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 11:11:48 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat Bernard("Bernard", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat Bernard("Bernard", 1);
		std::cout << Bernard << std::endl;
		Bernard.upGrade();
		std::cout << Bernard << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		Bureaucrat Beatrice("Beatrice", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat Beatrice("Beatrice", 150);
		std::cout << Beatrice << std::endl;
		Beatrice.downGrade();
		std::cout << Beatrice << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	
	Bureaucrat Silvie;

	std::cout << Silvie << std::endl;
	Silvie.upGrade();
	std::cout << Silvie << std::endl;
	Silvie.downGrade();
	Silvie.downGrade();
	std::cout << Silvie << std::endl;
}
