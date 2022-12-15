/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:58:24 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/08 11:47:54 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Constructor and Destructor */

Bureaucrat::Bureaucrat(void) : name("Silvie")
{
	grade = 3;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException("Error : Grade too low");
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException("Error : Grade too high");
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& toCopy) : name(toCopy.name)
{
	*this = toCopy;
}

Bureaucrat::~Bureaucrat(void)
{
}

/* Member Function */
/* --  Public  -- */

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form.getName() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << *this << " couldn't sign " << form.getName() << " because "
		<< e.what() << std::endl;
	}
}

int	Bureaucrat::getGrade(void) const
{
	return (grade);
}

std::string Bureaucrat::getName(void) const
{
	return (name);
}

void	Bureaucrat::upGrade(void)
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException("Error : Grade too high");
	else
		grade--;	
}

void	Bureaucrat::downGrade(void)
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException("Error : Grade too low");
	else
		grade++;
}

/* --  Private -- */

/* Nothing */

/* Exception */

/* GradeTooHighException */

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string error)
{
	_error = error;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return (_error.c_str());
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

/* GradeTooLowException */

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string error)
{
	_error = error;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return (_error.c_str());
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
}

/* Operator */
/* -- Assigment -- */

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& toCopy)
{
	if (this == &toCopy)
		return (*this);
	this->grade = toCopy.grade;
	return (*this);
}

/* -- Insertion --*/

std::ostream&	operator<<(std::ostream& flux, const Bureaucrat& toPrint)
{
	flux << toPrint.getName() << ", bureaucrat grade " << toPrint.getGrade();
	return (flux);
}
