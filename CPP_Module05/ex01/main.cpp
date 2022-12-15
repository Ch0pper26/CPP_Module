/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:05:04 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 11:18:32 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main(void)
{
	try
	{
		Form a("A Form", 151, 150);
	}
	catch (std::exception const& e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form b("B Form", 0, 150);
	}
	catch (std::exception const& e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form c("C Form", 1, 151);
	}
	catch (std::exception const& e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form d("D Form", 1, 0);
	}
	catch (std::exception const& e)
	{
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	Form Bush("Bush pruning", 20, 90);
	std::cout << Bush << std::endl;

	Bureaucrat Gerard("Gerard", 21);
	Bureaucrat Jean("Jean", 20);

	Gerard.signForm(Bush);
	std::cout << Bush << std::endl;
	Jean.signForm(Bush);
}
