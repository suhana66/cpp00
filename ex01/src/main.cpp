/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:52:18 by susajid           #+#    #+#             */
/*   Updated: 2024/09/19 15:06:26 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Phonebook	phonebook;
	std::string	query;

	while (getInput(query, "Type ADD to add a contact to the phonebook, SEARCH to find a contact in the phonebook or EXIT to exit the phonebook.\n$> "))
	{
		if (query == "ADD")
			phonebook.addContact();
		else if (query == "SEARCH")
			phonebook.searchContacts();
		else if (query == "EXIT")
			return (0);
		else
			std::cout << "\t* INVALID INPUT WAS ENTERED *" << std::endl;
	}
	std::cout << std::endl << "* Exiting phonebook... (CTRL+D was pressed)" << std::endl;
	return (1);
}

bool	getInput(std::string& result, const std::string prompt)
{
	if (std::cin.eof())
		return (false);
	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, result);
		if (std::cin.eof())
			return (false);
		if (result.empty())
		{
			std::cout << "\t* NO INPUT WAS ENTERED *" << std::endl;
			continue ;
		}
		return (true);
	}
}
