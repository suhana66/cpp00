/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:57:58 by susajid           #+#    #+#             */
/*   Updated: 2024/09/19 19:18:04 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
	: _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("")
{
}

Contact::~Contact(void)
{
}

// using the assignment operator to create a copy
Contact::Contact(const Contact &src)
{
	*this = src;
}

Contact& Contact::operator=(const Contact &src)
{
	if (this == &src)
		return (*this);
	this->_firstName = src._firstName;
	this->_lastName = src._lastName;
	this->_nickName = src._nickName;
	this->_phoneNumber = src._phoneNumber;
	this->_darkestSecret = src._darkestSecret;
	return (*this);
}

// parameterized constructor
Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
	: _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
{
}

std::string	Contact::getFirstName(int size) const
{
	if (size > 0 && (int)this->_firstName.length() > size)
		return (this->_firstName.substr(0, size - 1) + '.');
	return (this->_firstName);
}

std::string	Contact::getLastName(int size) const
{
	if (size > 0 && (int)this->_lastName.length() > size)
		return (this->_lastName.substr(0, size - 1) + '.');
	return (this->_lastName);
}

std::string	Contact::getNickName(int size) const
{
	if (size > 0 && (int)this->_nickName.length() > size)
		return (this->_nickName.substr(0, size - 1) + '.');
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(int size) const
{
	if (size > 0 && (int)this->_phoneNumber.length() > size)
		return (this->_phoneNumber.substr(0, size - 1) + '.');
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(int size) const
{
	if (size > 0 && (int)this->_darkestSecret.length() > size)
		return (this->_darkestSecret.substr(0, size - 1) + '.');
	return (this->_darkestSecret);
}
