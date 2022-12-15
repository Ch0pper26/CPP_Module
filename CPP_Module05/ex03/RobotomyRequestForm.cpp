/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:59:35 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 15:27:42 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Constructor and Destructor */

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request", 72, 45)
{
	this->target = "Empty";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("Robotomy Request", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& toCopy) :
Form(toCopy)
{
	this->target = toCopy.target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

/* Member Function */
/* --  Public  -- */

/* Nothing */

/* --  Private -- */

void	RobotomyRequestForm::action() const
{
	srand(time(0));
	int random = rand() % 2;

	std::cout << "BzzzzBzzzzz" << std::endl;
	std::cout << "BzzzzBzzzzz" << std::endl;

	if (random == 0)
		std::cout << target << " has been robotomised" << std::endl;
	else
		std::cout << target << " hasn't been robotomised" << std::endl;
}

/* Operator */
/* -- Assigment -- */

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& toCopy)
{
	if (this == &toCopy)
		return (*this);
	target = toCopy.target;
	this->Form::operator=(toCopy);
	return (*this);
}

