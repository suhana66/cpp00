/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:57:19 by susajid           #+#    #+#             */
/*   Updated: 2024/09/19 15:17:14 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

Phonebook::Phonebook(void)
	: _index(0)
{
	std::cout << "Welcome to My Awesome Phonebook!" << std::endl;
	std::cout << "* Created an empty phonebook for up to " << this->MAX_CONTACTS << " contacts" << std::endl;
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
	for (int i = 0; i < this->MAX_CONTACTS; i++)
		this->_contacts[i] = src._contacts[i];
	return (*this);
}

void	Phonebook::addContact(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	if (!getInput(firstName, "\tFirst Name\t[]: ")
		|| !getInput(lastName, "\tLast Name\t[]: ")
		|| !getInput(nickName, "\tNickname\t[]: ")
		|| !getInput(phoneNumber, "\tPhone Number\t[]: ")
		|| !getInput(darkestSecret, "\tDarkest Secret\t[]: "))
		return ;
	if (this->_index >= this->MAX_CONTACTS)
		std::cout << "Warning: overwriting info at index " << this->_index % this->MAX_CONTACTS << std::endl;
	this->_contacts[this->_index % this->MAX_CONTACTS] = Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	std::cout << "* Added info at index " << this->_index % this->MAX_CONTACTS << std::endl;
	this->_index++;
}

void	Phonebook::searchContacts(void)
{
}
