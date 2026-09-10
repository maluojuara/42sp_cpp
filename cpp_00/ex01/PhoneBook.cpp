/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:55:07 by malcosta          #+#    #+#             */
/*   Updated: 2026/09/10 19:43:38 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contacts_quant = 0;
	index_add = 0;
}

bool	isEmpty(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!std::isspace(str[i]))
			return false;
	}
	return true;
}

void	PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	while (isEmpty(firstName))
	{
		std::cout << "First name: ";
		std::getline(std::cin, firstName);

		if (std::cin.eof())
			return;

		if (isEmpty(firstName))
			std::cout << "Field cannot be empty!" << std::endl;
	}

	while (isEmpty(lastName))
	{
		std::cout << "Last name: ";
		std::getline(std::cin, lastName);
		
		if (std::cin.eof())
			return;

		if (isEmpty(lastName))
			std::cout << "Field cannot be empty!" << std::endl;
	}

	while (isEmpty(nickname))
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, nickname);

		if (std::cin.eof())
			return;

		if (isEmpty(nickname))
			std::cout << "Field cannot be empty!" << std::endl;
	}

	while (isEmpty(phoneNumber))
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, phoneNumber);

		if (std::cin.eof())
			return;

		if (isEmpty(phoneNumber))
			std::cout << "Field cannot be empty!" << std::endl;
	}

	while (isEmpty(darkestSecret))
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, darkestSecret);

		if (std::cin.eof())
			return;

		if (isEmpty(darkestSecret))
			std::cout << "Field cannot be empty!" << std::endl;
	}

	contacts[index_add].setFirstName(firstName);
	contacts[index_add].setLastName(lastName);
	contacts[index_add].setNickname(nickname);
	contacts[index_add].setPhoneNumber(phoneNumber);
	contacts[index_add].setDarkestSecret(darkestSecret);

	if (contacts_quant < 8)
		contacts_quant++;
	index_add++;
	if (index_add >= 8)
		index_add = 0;
}

std::string formatField(std::string field)
{
	if (field.length() > 10)
		return field.substr(0, 9) + ".";
	return field;
}

void	PhoneBook::displayContacts()
{
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;

	for (int i = 0; i < contacts_quant; i++)
	{
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		std::cout << std::setw(10) << formatField(contacts[i].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10) << formatField(contacts[i].getLastName());
		std::cout << "|";
		std::cout << std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
	}
}

void	PhoneBook::displaySpecificContact(int index)
{
	std::cout << "First name: ";
	std::cout << contacts[index - 1].getFirstName() << std::endl;
	
	std::cout << "Last name: ";
	std::cout << contacts[index - 1].getLastName() << std::endl;
	
	std::cout << "Nickname: ";
	std::cout << contacts[index - 1].getNickname() << std::endl;
	
	std::cout << "Phone number: ";
	std::cout << contacts[index - 1].getPhoneNumber() << std::endl;
	
	std::cout << "Darkest secret: ";
	std::cout << contacts[index - 1].getDarkestSecret() << std::endl;
}

void	PhoneBook::searchContacts()
{
	if (contacts_quant == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return;
	}

	std::string	index_to_display;
	int			index;

	displayContacts();

	while (true)
	{
		std::cout << "Which contact do you want to display? (Inform the index): ";
		std::getline(std::cin, index_to_display);

		if (std::cin.eof())
			return;

		std::stringstream ss(index_to_display);
		ss >> index;

		if (ss.fail())
		{
			std::cout << "Invalid input. Please enter a number." << std::endl;
			continue;
		}

		if (index >= 1 && index <= contacts_quant)
		{
			displaySpecificContact(index);
			return;
		}

		std::cout << "Index out of range. Try again!" << std::endl;
	}
}
