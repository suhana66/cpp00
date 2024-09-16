/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:37:44 by susajid           #+#    #+#             */
/*   Updated: 2024/09/16 12:34:09 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class	Phonebook
{
	private:
		Contact	_contacts[8];

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