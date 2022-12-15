/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:59:35 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 15:14:26 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& toCopy);
		~RobotomyRequestForm(void);
	
		RobotomyRequestForm& operator=(const RobotomyRequestForm& toCopy);

	private:

		std::string target;

		virtual void	action() const;
};

#endif
