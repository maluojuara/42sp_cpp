/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:54:56 by malcosta          #+#    #+#             */
/*   Updated: 2026/09/16 17:43:42 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main (void)
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		if (command == "ADD")
		{
			if (phonebook.addContact() == false)
				break;
		}
		else if (command == "SEARCH")
		{
			phonebook.searchContacts();
			if (std::cin.eof())
				break ;
		}
			
		else if (command == "EXIT")
			break ;
	}

	return (0);
}