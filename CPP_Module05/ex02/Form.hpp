/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:33:49 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/10 16:38:38 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	public:

		Form(void);
		Form(std::string name, int signed_grade, int execute_grade);
		Form(const Form& toCopy);
		virtual ~Form(void);

		Form& operator=(const Form& toCopy);

		bool	getSigned(void) const ;
		std::string	getName(void) const ;
		int		getSignedGrade(void) const ;
		int		getExecuteGrade(void) const ;

		void	beSigned(const Bureaucrat& signatory);
		void	execute(const Bureaucrat& executor) const;
	
	private:

		bool _signed;
		std::string const _name;
		int	const _signed_grade;
		int	const _execute_grade;

		virtual	void	action() const = 0;

		class GradeTooLowException : public std::exception
		{
			public:

				GradeTooLowException(std::string error);
				virtual ~GradeTooLowException(void) throw();

				virtual const char* what() const throw();

			private:

				std::string _error;
		};
		
		class GradeTooHighException : public std::exception
		{
			public:

				GradeTooHighException(std::string error);
				virtual ~GradeTooHighException(void) throw();

				virtual const char* what() const throw();

			private:

			std::string _error;
		};

		class NotSignedException : public std::exception
		{
			public:

				NotSignedException(std::string error);
				virtual ~NotSignedException(void) throw();

				virtual const char* what() const throw();

			private:

				std::string _error;
		};

};

std::ostream&	operator<<(std::ostream& flux, const Form& toPrint);

#endif
