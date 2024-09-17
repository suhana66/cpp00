/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:57:19 by susajid           #+#    #+#             */
/*   Updated: 2024/09/16 20:58:59 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

Phonebook::Phonebook(void)
{
	std::cout << "Welcome to My Awesome Phonebook!" << std::endl;
	std::cout << "* Created an empty phonebook for up to " << Phonebook::MAX_CONTACTS << " contacts" << std::endl;
	this->_index = 0;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Goodbye!" << std::endl;
	std::cout << "* Destroying My Awesome Phonebook" << std::endl;
}

// using the assignment operator to create a copy
Phonebook::Phonebook(const Phonebook &src)
{
	*this = src;
}

Phonebook& Phonebook::operator=(const Phonebook &src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < Phonebook::MAX_CONTACTS; i++)
		this->_contacts[i] = src._contacts[i];
	return (*this);
}

void	Phonebook::addContact(void)
{
}

void	Phonebook::searchContacts(void)
{
}
