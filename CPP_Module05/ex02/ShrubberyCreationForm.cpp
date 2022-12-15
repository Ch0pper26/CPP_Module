/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:20:26 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 15:16:20 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* Constructor and Destructor */

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137)
{
	this->target = "Empty";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreation", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& toCopy) :
Form(toCopy)
{
	this->target = toCopy.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

/* Member Function */
/* --  Public  -- */

/* Nothing */

/* --  Private -- */

void	ShrubberyCreationForm::action(void) const
{
	std::string file = target + "_shrubbery";
	std::ofstream outfile(file.c_str());

	if (!outfile)
		throw std::ofstream::failure(std::strerror(errno));
	
	outfile <<
	"              * *                         * *           \n"
	"           *    *  *                   *    *  *        \n"
	"      *  *    *     *  *          *  *    *     *  *    \n"
	"     *     *    *  *    *        *     *    *  *    *   \n"
	"  * *   *    *    *    *   *  * *   *    *    *    *   * \n"
	" *     *  *    * * .#  *   * *     *  *    * * .#  *   *\n"
	"  *   *     * #.  .# *   *     *   *     * #.  .# *   *   \n"
	"   *     \"#.  #: #\" * *    *  *     \"#.  #: #\" * *    * \n"
	"  *   * * \"#. ##\"       *    *   * * \"#. ##\"       *    \n"
	"   *       \"'###               *       \"'###           \n"
	"            \"##                         \"##            \n"
	"              ##.                          ##.           \n"
	"             .##:                         .##:           \n"
	"             :###                         :###           \n"
	"             ;###                         ;###           \n"
	"            ,####.                       ,####.          \n"
	"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n"
	<< std::endl ;

	outfile.close();
}

/* Operator */
/* -- Assigment -- */

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& toCopy)
{
	if (this == &toCopy)
		return (*this);
	target = toCopy.target;
	this->Form::operator=(toCopy);
	return (*this);
}

