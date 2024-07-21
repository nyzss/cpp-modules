/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:09:03 by okoca             #+#    #+#             */
/*   Updated: 2024/07/21 09:44:39 by okoca            ###   ########.fr       */
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
	std::string	FirstnameField = "First Name";
	std::string	LastnameField = "Last Name";
	std::string	NicknameField = "Nickname";
	std::string	PhoneField = "Phone Number";
	std::string	DarkestField = "Darkest Secret";

	std::cout << std::left << std::setw(FirstnameField.size()) << FirstnameField
			<< std::setw(0) << " ";
	std::cout << std::left << std::setw(LastnameField.size()) << LastnameField
			<< std::setw(0) << " ";
	std::cout << std::left << std::setw(NicknameField.size()) << NicknameField
			<< std::setw(0) << " ";
	std::cout << std::left << std::setw(PhoneField.size()) << PhoneField
			<< std::setw(0) << " ";
	std::cout << std::left << std::setw(DarkestField.size()) << DarkestField
			<< std::setw(0) << " ";
	std::cout << std::endl;

	std::cout << std::left << std::setw(FirstnameField.size()) << std::setfill('-') << "-"
			<< std::setw(0) << std::setfill(' ') << " ";
	std::cout << std::left << std::setw(LastnameField.size()) << std::setfill('-') << "-"
				<< std::setw(0) << std::setfill(' ') << " ";
	std::cout << std::left << std::setw(NicknameField.size()) << std::setfill('-') << "-"
				<< std::setw(0) << std::setfill(' ') << " ";
	std::cout << std::left << std::setw(PhoneField.size()) << std::setfill('-') << "-"
				<< std::setw(0) << std::setfill(' ') << " ";
	std::cout << std::left << std::setw(DarkestField.size()) << std::setfill('-') << "-"
				<< std::setw(0) << std::setfill(' ') << " ";
	std::cout << std::endl;
	for (int i = 0; i < this->Total; i++)
	{
		std::cout << std::left << std::setw(FirstnameField.size()) << this->Contacts[i].GetFirstName()
				<< std::setw(0) << std::setfill(' ') << " ";
		std::cout << std::left << std::setw(LastnameField.size()) << this->Contacts[i].GetLastName()
				<< std::setw(0) << std::setfill(' ') << " ";
		std::cout << std::left << std::setw(NicknameField.size()) << this->Contacts[i].GetNickname()
				<< std::setw(0) << std::setfill(' ') << " ";
		std::cout << std::left << std::setw(PhoneField.size()) << this->Contacts[i].GetPhone()
				<< std::setw(0) << std::setfill(' ') << " ";
		std::cout << std::left << std::setw(DarkestField.size()) << this->Contacts[i].GetDarkest()
				<< std::setw(0) << std::setfill(' ') << " ";
		std::cout << std::endl;
	}
}

#endif