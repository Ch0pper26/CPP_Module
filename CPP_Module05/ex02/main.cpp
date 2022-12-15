/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:05:04 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 15:17:58 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main(void)
{
	PresidentialPardonForm	A("Marvin");
	ShrubberyCreationForm	B("Queen's Garden");
	RobotomyRequestForm		C("Human");

	Bureaucrat	UselessGuy ("Guy", 150);
	Bureaucrat	Paul ("Paul", 137);
	Bureaucrat	Anna ("Anna", 45);
	Bureaucrat	Bob ("Bob", 5);

	Anna.signForm(C);
	Paul.signForm(B);

	std::cout << std::endl;

	Bob.executeForm(A);

	std::cout << std::endl;

	Bob.signForm(A);

	std::cout << std::endl;

	UselessGuy.executeForm(A);
	UselessGuy.executeForm(B);
	UselessGuy.executeForm(C);

	std::cout << std::endl;

	Bob.executeForm(A);
	Paul.executeForm(B);
	Anna.executeForm(C);

	return (0);
}
