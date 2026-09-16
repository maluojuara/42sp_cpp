/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:55:15 by malcosta          #+#    #+#             */
/*   Updated: 2026/09/16 17:39:16 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <sstream>
#include <cctype>
#include <iostream>

class PhoneBook
{
	private:
		Contact contacts[8];
		int		contacts_quant;
		int		index_add;

	public:
		PhoneBook();
		bool	addContact();
		void	displayContacts();
		void	displaySpecificContact(int index);
		void	searchContacts();
};

#endif