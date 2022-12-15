/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:14:45 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/15 12:03:02 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	m_nb_contact = 0;
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::ask_ContactInfo(void)
{
	std::string user_entry[5]= {""};

	std::cout << "\n--Please enter the contact information--\n";
	do {
		std::cout << "First Name :\n";
		user_entry[0] = get_user_entry();
	} while (user_entry[0] == "");
	do {
		std::cout << "\nLast Name :\n";
		user_entry[1] = get_user_entry();
	} while (user_entry[1] == "");
	do {
		std::cout << "\nNickname :\n";
		user_entry[2] = get_user_entry();
	} while (user_entry[2] == "");
	do {
		std::cout << "\nPhone Number :\n";
		user_entry[3] = get_user_entry();
	} while (user_entry[3] == "" || !is_Number(user_entry[3]));
	do {
		std::cout << "\nDarkest Secret :\n";
		user_entry[4] = get_user_entry();
	} while (user_entry[4] == "");
	save_Contact(user_entry);
	std::cout << "\nContact " << user_entry[0] << " added\n";
}

void	PhoneBook::show_Contact(void) const
{
	std::string	user_entry;

	if (m_nb_contact == 0)
	{
		std::cout << "\nThere is no contact\n";
		return ;
	}
	std::cout << std::setw(28) << "| Contact |" << std::endl;
	display_Border();
	std::cout << "|First Name|Last  Name| Nickname |  Number  |\n";
	display_Border();
	for (int i = 0; i < m_nb_contact; i++)
	{
		std::cout << '|';
		display_OneTabline(m_contact[i]);
		std::cout << std::endl;
	}
	display_Border();
	choose_Contact();
}

void	PhoneBook::choose_Contact(void) const
{
	std::string	user_entry;

	do {
		std::cout << "\nPlease choose an index between 0-";
		std::cout << (m_nb_contact - 1) << std::endl;
		user_entry = get_user_entry();
	} while (user_entry == "" || !is_Index(user_entry) || user_entry.size() > 1);
	m_contact[atoi(user_entry.c_str())].aff_Attribute();
}

void	PhoneBook::display_Border(void) const
{
	std::cout << '+';
	for (int i = 0; i < 4; i++)
		std::cout << std::setfill('-') << std::setw(11) << "+";
	std::cout << std::setfill(' ') << std::endl;
}

bool	PhoneBook::is_Index(std::string index) const
{
	if (!is_Number(index))
		return (false);
	else if (atoi(index.c_str()) < 0 || atoi(index.c_str()) > m_nb_contact - 1)
		return (false);
	else
		return (true);
}

bool	PhoneBook::is_Number(std::string number) const
{
	int	i = 0;

	while (i < (int)number.size())
	{
		if (isdigit(number[i]) == 0 && isspace(number[i]) == 0)
		{
			std::cout << "Please enter a valid number\n";
			return (false);
		}
		i++;
	}
	return (true);
}

void	PhoneBook::save_Contact(std::string contact_info[])
{
	if (m_nb_contact >= 8)
	{
		for (int i = 0; i < 7; i++)
			m_contact[i] = m_contact[i + 1];
		m_nb_contact = 7;
	}
	m_contact[m_nb_contact].set_FirstName(contact_info[0]);
	m_contact[m_nb_contact].set_LastName(contact_info[1]);
	m_contact[m_nb_contact].set_Nickname(contact_info[2]);
	m_contact[m_nb_contact].set_PhoneNumber(contact_info[3]);
	m_contact[m_nb_contact].set_DarkestSecret(contact_info[4]);
	m_nb_contact++;
}

void	PhoneBook::display_OneTabline(Contact contact) const
{
	display_OneInfo(contact.get_FirstName());
	display_OneInfo(contact.get_LastName());
	display_OneInfo(contact.get_Nickname());
	display_OneInfo(contact.get_PhoneNumber());
}

void	PhoneBook::display_OneInfo(std::string info) const
{
	if (info.size() > 10)
		std::cout << info.substr(0, 9) << '.' << '|';
	else
		std::cout << std::setw(10) << info << '|';
}

std::string	PhoneBook::get_user_entry(void) const
{
	std::string	user_entry;

	if (std::getline(std::cin, user_entry))
		return (user_entry);
	else
		exit(EXIT_FAILURE);
}
