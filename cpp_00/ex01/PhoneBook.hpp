/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:55:15 by malcosta          #+#    #+#             */
/*   Updated: 2026/09/10 19:21:07 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <sstream>
#include <cctype>

class PhoneBook
{
	private:
		Contact contacts[8];
		int		contacts_quant;
		int		index_add;

	public:
		PhoneBook();
		void	addContact();
		void	displayContacts();
		void	displaySpecificContact(int index);
		void	searchContacts();
};

#endif