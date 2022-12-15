/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:58:24 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/10 14:18:33 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:

		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& toCopy);
		~Bureaucrat(void);

		Bureaucrat& operator=(const Bureaucrat& toCopy);

		void		signForm(Form& form);
		int			getGrade(void) const;
		std::string getName(void) const;
		void		upGrade(void);
		void		downGrade(void);

	private:

		int			grade;
		std::string const name;

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

};

std::ostream&	operator<<(std::ostream& flux, const Bureaucrat& toPrint);

#endif
