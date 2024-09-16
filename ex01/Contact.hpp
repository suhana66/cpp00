/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:43:09 by susajid           #+#    #+#             */
/*   Updated: 2024/09/16 12:02:05 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class	Contact
{
	private:
		std::string	mFirstName;
		std::string	mLastName;
		std::string	mNickName;
		std::string	mPhoneNumber;
		std::string	mSecret;

	public:
		Contact(void);
		~Contact(void);
		Contact(const Contact &src);
		Contact& operator=(const Contact &src);
};

#endif /* CONTACT_H */
