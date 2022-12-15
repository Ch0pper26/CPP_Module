/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:05:00 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 15:27:01 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* Constructor and Destructor */

Intern::Intern(void)
{
}

Intern::Intern(const Intern& toCopy)
{
	*this = toCopy;
}

Intern::~Intern(void)
{
}

/* Member Function */
/* --  Public  -- */

Form*	Intern::makeForm(std::string formname, std::string target)
{
	Form*	tmp;
	int		i = 0;

	std::string	formtype[3] = {"shrubbery creation", "robotomy request", 
			"presidential pardon"};
	while (i < 3 && formtype[i] != formname)
		i++;
	switch	(i)
	{
		case 0:
			tmp = new ShrubberyCreationForm(target);
			break;

		case 1:
			tmp = new RobotomyRequestForm(target);
			break;

		case 2:
			tmp = new PresidentialPardonForm(target);
			break;

		default:
			tmp = NULL;
			break;

	}
	if	(tmp == NULL)
		std::cout << "Intern can't creates " << formname << std::endl;
	else
		std::cout << "Intern creates " << tmp->getName() << std::endl;
	return (tmp);
}

/* --  Private -- */

/* Nothing */

/* Operator */
/* -- Assigment -- */

Intern&	Intern::operator=(const Intern& toCopy)
{
	if (this == &toCopy)
		return (*this);
	return (*this);
}

