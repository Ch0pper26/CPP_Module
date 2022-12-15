/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:06:07 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/10 17:00:47 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void	Contact::aff_Attribute(void) const
{
	std::cout << "First Name : " << m_first_name << std::endl;
	std::cout << "Last Name : " << m_last_name << std::endl;
	std::cout << "Nickame : " << m_nickname << std::endl;
	std::cout << "Phone Number : " << m_phone_number << std::endl;
	std::cout << "Darkest Secret : " << m_darkest_secret << std::endl;
}

void	Contact::set_FirstName(std::string first_name)
{
	m_first_name = first_name;
}

void	Contact::set_LastName(std::string last_name)
{
	m_last_name = last_name;
}

void	Contact::set_Nickname(std::string nickname)
{
	m_nickname = nickname;
}

void	Contact::set_PhoneNumber(std::string phone_number)
{
	m_phone_number = phone_number;
}

void	Contact::set_DarkestSecret(std::string darkest_secret)
{
	m_darkest_secret = darkest_secret;
}

std::string	Contact::get_FirstName(void) const
{
	return (m_first_name);
}

std::string	Contact::get_LastName(void) const
{
	return (m_last_name);
}

std::string	Contact::get_Nickname(void) const
{
	return (m_nickname);
}

std::string	Contact::get_PhoneNumber(void) const
{
	return (m_phone_number);
}

std::string	Contact::get_DarkestSecret(void) const
{
	return (m_darkest_secret);
}
