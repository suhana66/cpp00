/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:57:58 by susajid           #+#    #+#             */
/*   Updated: 2024/09/16 16:51:30 by susajid          ###   ########.fr       */
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
