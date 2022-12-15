/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:20:26 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 15:16:02 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

class ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& toCopy);
		~ShrubberyCreationForm(void);
	
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& toCopy);

	private:

		std::string target;

		virtual void	action() const;
};

#endif
