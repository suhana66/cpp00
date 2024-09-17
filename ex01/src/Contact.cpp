/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:57:58 by susajid           #+#    #+#             */
/*   Updated: 2024/09/16 20:16:32 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
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
	this->_secret = src._secret;
	return (*this);
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

std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}
