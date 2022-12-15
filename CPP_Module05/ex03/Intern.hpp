/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:05:00 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 10:57:43 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

class Intern
{
	public:

		Intern(void);
		Intern(const Intern& toCopy);
		~Intern(void);

		Intern&	operator=(const Intern& toCopy);

		Form*	makeForm(std::string formname, std::string target);

	private:

};

#endif
