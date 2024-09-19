/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:57:58 by susajid           #+#    #+#             */
/*   Updated: 2024/09/19 14:17:29 by susajid          ###   ########.fr       */
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

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
