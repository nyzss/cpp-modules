/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:09:03 by okoca             #+#    #+#             */
/*   Updated: 2024/07/20 20:18:04 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"
# define MAX_CONTACTS 8

class PhoneBook
{
private:
	Contact contacts[MAX_CONTACTS];
	int		len;
public:
	PhoneBook();
	~PhoneBook();
	int AddContact(std::string name);
};

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

int PhoneBook::AddContact(std::string name)
{
}

#endif