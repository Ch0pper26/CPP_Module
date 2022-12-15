/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:56:03 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/14 13:36:06 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <string>

class PhoneBook
{
	public:

	PhoneBook();
	~PhoneBook();

	void	ask_ContactInfo(void);
	void	show_Contact(void) const;

	private:

	Contact m_contact[8];
	int		m_nb_contact;

	void	choose_Contact(void) const;
	void	display_Border(void) const;
	bool	is_Index(std::string index) const;
	bool	is_Number(std::string number) const;
	void	save_Contact(std::string contact_info[]);
	void	display_OneTabline(Contact contact) const;
	void	display_OneInfo(std::string info) const;
	std::string	get_user_entry(void) const;
};

#endif
