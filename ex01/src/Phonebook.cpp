/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:57:19 by susajid           #+#    #+#             */
/*   Updated: 2024/09/16 12:59:08 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

Phonebook::Phonebook(void)
{
	std::cout << "Welcome to My Awesome Phonebook!" << std::endl;
	std::cout << "* Created an empty phonebook for up to 8 contacts" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Goodbye!" << std::endl;
	std::cout << "* Destroying My Awesome Phonebook" << std::endl;
}
