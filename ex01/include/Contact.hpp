/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:43:09 by susajid           #+#    #+#             */
/*   Updated: 2024/09/19 19:00:54 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class	Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		Contact(void);
		~Contact(void);
		Contact(const Contact &src);
		Contact& operator=(const Contact &src);

		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);

		std::string	getFirstName(int size = 0) const;
		std::string	getLastName(int size = 0) const;
		std::string	getNickName(int size = 0) const;
		std::string	getPhoneNumber(int size = 0) const;
		std::string	getDarkestSecret(int size = 0) const;
};

#endif /* CONTACT_H */
