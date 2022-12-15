/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:33:49 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/08 11:50:15 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Constructor and Destructor */

Form::Form(void) : _name("Empty") , _signed_grade(150) , _execute_grade(150)
{
	_signed = false;
}

Form::Form(std::string name, int signed_grade, int execute_grade) : _name(name),
_signed_grade(signed_grade) , _execute_grade(execute_grade)
{
	_signed = false;
	if (signed_grade > 150)
		throw Form::GradeTooLowException("Signed grade too low");
	else if (signed_grade < 1)
		throw Form::GradeTooHighException("Signed grade too high");
	if (execute_grade > 150)
		throw Form::GradeTooLowException("Execute grade too low");
	else if (execute_grade < 1)
		throw Form::GradeTooHighException("Execute grade too high");
}

Form::Form(const Form& toCopy) : _name(toCopy._name),
_signed_grade(toCopy._signed_grade) , _execute_grade(toCopy._execute_grade)
{
	_signed = toCopy._signed;
}

Form::~Form(void)
{
}

/* Member Function */
/* --  Public  -- */

bool	Form::getSigned(void) const
{
	return (_signed);
}

std::string	Form::getName(void) const
{
	return (_name);
}

int		Form::getSignedGrade(void) const
{
	return (_signed_grade);
}

int		Form::getExecuteGrade(void) const
{
	return (_execute_grade);
}

void	Form::beSigned(const Bureaucrat& signatory)
{
	if (signatory.getGrade() > _signed_grade)
		throw Form::GradeTooLowException("grade too low to sign this form");
	else
		_signed = true;
}

/* --  Private -- */

/* Nothing */

/* Exception */

/* GradeTooHighException */

Form::GradeTooHighException::GradeTooHighException(std::string error)
{
	_error = error;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return (_error.c_str());
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

/* GradeTooLowException */

Form::GradeTooLowException::GradeTooLowException(std::string error)
{
	_error = error;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return (_error.c_str());
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
}


/* Operator */
/* -- Assigment -- */

Form& Form::operator=(const Form& toCopy)
{
	if (this == &toCopy)
		return (*this);
	_signed = toCopy._signed;
	return (*this);
}

/* Insertion */

std::ostream&	operator<<(std::ostream& flux, const Form& toPrint)
{
	flux << "Form" << std::endl;
	flux << "Name: " << toPrint.getName() << std::endl;
	flux << "Signed : " << toPrint.getSigned() << std::endl;
	flux << "Signed Grade :" << toPrint.getSignedGrade() << std::endl;
	flux << "Execute Grade :" << toPrint.getExecuteGrade() << std::endl;
	return (flux);
}
