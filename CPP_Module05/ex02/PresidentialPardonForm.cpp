/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:59:35 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 15:16:44 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* Constructor and Destructor */

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon", 25, 5)
{
	this->target = "Empty";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("Presidential Pardon", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& toCopy) :
Form(toCopy)
{
	this->target = toCopy.target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

/* Member Function */
/* --  Public  -- */

/* Nothing */

/* --  Private -- */

void	PresidentialPardonForm::action(void) const
{
	std::cout << target << "has been forgiven by Zaphod Beeblebrox" << std::endl;
}

/* Operator */
/* -- Assigment -- */

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& toCopy)
{
	if (this == &toCopy)
		return (*this);
	target = toCopy.target;
	this->Form::operator=(toCopy);
	return (*this);
}

