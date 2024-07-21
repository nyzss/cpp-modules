/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:09:03 by okoca             #+#    #+#             */
/*   Updated: 2024/07/21 11:55:43 by okoca            ###   ########.fr       */
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
	Contact Contacts[MAX_CONTACTS];
	int		LastAdded;
	int		Total;
public:
	PhoneBook();
	int AddContact(Contact NewContact);
	void Add();
	void Search();
};

PhoneBook::PhoneBook()
{
	this->LastAdded = 0;
	this->Total = 0;
}

int PhoneBook::AddContact(Contact NewContact)
{
	if (this->LastAdded == MAX_CONTACTS)
		this->LastAdded = 0;
	this->Contacts[this->LastAdded] = NewContact;
	this->LastAdded++;
	return (1);
}

void PhoneBook::Add()
{
	Contact NewContact;

	NewContact.InitContact();
	this->AddContact(NewContact);
	if (this->Total != MAX_CONTACTS)
		this->Total++;
}

void PhoneBook::Search()
{
	std::string	FirstnameField = "First";
	std::string	LastnameField = "Last";
	std::string	NicknameField = "Nickname";
	std::string	PhoneField = "Phone Number";
	std::string	DarkestField = "Darkest Secret";

	std::cout << std::right << std::setw(10) << "Index"
			<< std::setw(0) << " ";
	std::cout << std::right << std::setw(10) << FirstnameField
			<< std::setw(0) << " ";
	std::cout << std::right << std::setw(10) << LastnameField
			<< std::setw(0) << " ";
	std::cout << std::right << std::setw(10) << NicknameField
			<< std::setw(0) << " ";
	std::cout << std::endl;

	for (int i = 0; i < this->Total; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1
				<< std::setw(0) << std::setfill(' ') << " ";
		std::cout << std::right << std::setw(10) << this->Contacts[i].GetFirstName()
				<< std::setw(0) << std::setfill(' ') << " ";
		std::cout << std::right << std::setw(10) << this->Contacts[i].GetLastName()
				<< std::setw(0) << std::setfill(' ') << " ";
		std::cout << std::right << std::setw(10) << this->Contacts[i].GetNickname()
				<< std::setw(0) << std::setfill(' ') << " ";
		std::cout << std::endl;
	}
}

#endif