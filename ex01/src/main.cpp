/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:52:18 by susajid           #+#    #+#             */
/*   Updated: 2024/09/16 17:27:08 by susajid          ###   ########.fr       */
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
		std::cout << "Enter a command > ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "* Exiting phonebook now... (CTRL+D was pressed)" << std::endl;
			break ;
		}
	}
	return (0);
}
