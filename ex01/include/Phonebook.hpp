/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:37:44 by susajid           #+#    #+#             */
/*   Updated: 2024/09/21 12:29:08 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <sstream>

# define COLUMN_WIDTH 10

class	Phonebook
{
	private:
		static const int	MAX_CONTACTS = 8;
		Contact				_contacts[MAX_CONTACTS];
		int					_contactCount;

		static void	_printDivider(int columnCount);
		static void	_printColumn(int columnCount, std::string columnValues[]);

	public:
		Phonebook(void);
		~Phonebook(void);
		Phonebook(const Phonebook &src);
		Phonebook& operator=(const Phonebook &src);

		void	addContact(void);
		void	searchContacts(void) const;
		void	printContacts(int rowCount) const;
};

bool	getInput(std::string& result, const std::string prompt);

#endif /* PHONEBOOK_H */