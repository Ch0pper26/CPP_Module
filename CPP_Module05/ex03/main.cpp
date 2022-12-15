/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:05:04 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 15:21:27 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"


int	main(void)
{
	Bureaucrat	John("John", 1);
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("Nothing", "UWU");

	if (rrf != NULL)	
		John.signForm(*rrf);

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	John.signForm(*rrf);
	John.executeForm(*rrf);
	delete (rrf);

	rrf = someRandomIntern.makeForm("shrubbery creation", "Garden");
	John.signForm(*rrf);
	John.executeForm(*rrf);
	delete (rrf);

	rrf = someRandomIntern.makeForm("presidential pardon", "Bob");
	John.signForm(*rrf);
	John.executeForm(*rrf);
	delete (rrf);

	return (0);
}
