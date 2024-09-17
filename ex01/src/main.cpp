/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:52:18 by susajid           #+#    #+#             */
/*   Updated: 2024/09/17 16:05:07 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Phonebook	phonebook;
	std::string	str;

	while (str != "EXIT")
	{
		if (!getInput(str, "Enter a command > ", "Exiting phonebook"))
			break ;
		if (str == "ADD")
			phonebook.addContact();
		else if (str == "SEARCH")
			phonebook.searchContacts();
	}
	return (0);
}

bool	getInput(std::string& str, const std::string prompt, const std::string eofAction)
{
	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl << "* " << eofAction <<  "... (CTRL+D was pressed)" << std::endl;
			return (false);
		}
		if (str.empty())
		{
			std::cout << "* NO INPUT WAS ENTERED *" << std::endl;
			continue ;
		}
		return (true);
	}
}
