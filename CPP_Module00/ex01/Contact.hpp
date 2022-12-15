/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:33:21 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/10 15:23:43 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	public:

	Contact();
	~Contact();

	void	aff_Attribute(void) const;
	void	set_FirstName(std::string first_name);
	void	set_LastName(std::string last_name);
	void	set_Nickname(std::string nickname);
	void	set_PhoneNumber(std::string phone_number);
	void	set_DarkestSecret(std::string darkest_secret);	
	std::string	get_FirstName(void) const;
	std::string	get_LastName(void) const;
	std::string	get_Nickname(void) const;
	std::string	get_PhoneNumber(void) const;
	std::string	get_DarkestSecret(void) const;

	private:

	std::string m_first_name;
	std::string m_last_name;
	std::string m_nickname;
	std::string m_phone_number;
	std::string m_darkest_secret;
};

#endif
