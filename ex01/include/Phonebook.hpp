/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:37:44 by susajid           #+#    #+#             */
/*   Updated: 2024/09/19 12:34:52 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

bool	getInput(std::string& result, const std::string prompt);

class	Phonebook
{
	private:
		static const int	MAX_CONTACTS = 8;
		Contact				_contacts[MAX_CONTACTS];
		int					_index;

	public:
		Phonebook(void);
		~Phonebook(void);
		Phonebook(const Phonebook &src);
		Phonebook& operator=(const Phonebook &src);

		void	addContact(void);
		void	searchContacts(void);
		void	printContacts(void);
};

#endif /* PHONEBOOK_H */