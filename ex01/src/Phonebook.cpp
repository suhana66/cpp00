/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:57:19 by susajid           #+#    #+#             */
/*   Updated: 2024/09/19 18:16:36 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
	: _contactCount(0)
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
	if (this->_contactCount >= this->MAX_CONTACTS)
		std::cout << "Warning: overwriting info at index " << this->_contactCount % this->MAX_CONTACTS << std::endl;
	this->_contacts[this->_contactCount % this->MAX_CONTACTS] = Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	std::cout << "* Added info at index " << this->_contactCount % this->MAX_CONTACTS << std::endl << std::endl;
	this->_contactCount++;
}

void	Phonebook::searchContacts(void)
{
	if (this->_contactCount == 0)
	{
		std::cout << "* The phonebook is empty (Nothing to show)" << std::endl;
		return ;
	}
	this->printContacts();
}

void	Phonebook::printContacts(void)
{
	std::string	columnValues[] = {"Index", "First Name", "Last Name", "Nickname"};
	int			columnCount = sizeof(columnValues) / sizeof(columnValues[0]);

	this->_printDivider(columnCount);
	this->_printColumn(columnCount, columnValues);
	this->_printDivider(columnCount);
}

void	Phonebook::_printDivider(int columnCount)
{
	std::ios	init(NULL);
	init.copyfmt(std::cout);

	if (columnCount <= 0)
		return ;
	std::cout << "\t+" << std::setfill('-');
	while (columnCount--)
		std::cout << std::setw(COLUMN_WIDTH + 1) << "+";
	std::cout << std::endl;

	std::cout.copyfmt(init);
}

void	Phonebook::_printColumn(int columnCount, std::string columnValues[])
{
	std::ios	init(NULL);
	init.copyfmt(std::cout);

	if (columnCount <= 0)
		return ;
	std::cout << "\t|";
	for (int i = 0; i < columnCount; i++)
		std::cout << std::setw(COLUMN_WIDTH) << columnValues[i] << "|";
	std::cout << std::endl;

	std::cout.copyfmt(init);
}
