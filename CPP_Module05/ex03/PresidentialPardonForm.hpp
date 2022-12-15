/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:59:35 by eblondee          #+#    #+#             */
/*   Updated: 2022/12/12 15:25:18 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& toCopy);
		~PresidentialPardonForm(void);

		PresidentialPardonForm& operator=(const PresidentialPardonForm& toCopy);

	private:

		std::string target;

		virtual void	action(void) const;
};

#endif
