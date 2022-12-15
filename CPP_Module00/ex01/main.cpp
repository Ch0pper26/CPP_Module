/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:08:35 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/14 14:00:31 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	user_entry;

	std::cout << "Welcome to your PhoneBook\n";
	do
	{
		std::cout << "\nPlease choose an action between ADD SEARCH and EXIT\n";
		if (!std::getline(std::cin, user_entry))
			exit(EXIT_FAILURE);
		if (user_entry == "ADD")
			phonebook.ask_ContactInfo();
		else if (user_entry == "SEARCH")
			phonebook.show_Contact();
	}
	while (user_entry != "EXIT");
	return (0);
}
