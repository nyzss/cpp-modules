/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:09:03 by okoca             #+#    #+#             */
/*   Updated: 2024/07/21 21:38:46 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
				<< std::setw(0) << std::setfill(' ') << "| ";
		std::cout << std::right << std::setw(10) << (this->Contacts[i].GetFirstName().size() > 10 ? this->Contacts[i].GetFirstName().substr(0, 9).append(".") : this->Contacts[i].GetFirstName())
				<< std::setw(0) << std::setfill(' ') << "| ";
		std::cout << std::right << std::setw(10) << (this->Contacts[i].GetLastName().size() > 10 ? this->Contacts[i].GetLastName().substr(0, 9).append(".") : this->Contacts[i].GetLastName())
				<< std::setw(0) << std::setfill(' ') << "| ";
		std::cout << std::right << std::setw(10) << (this->Contacts[i].GetNickname().size() > 10 ? this->Contacts[i].GetNickname().substr(0, 9).append(".") : this->Contacts[i].GetNickname())
				<< std::setw(0) << std::setfill(' ') << "| ";
		std::cout << std::endl;
	}

	std::string new_input;
	int	index;

	std::cout << "[INDEX]> ";
	try
	{
		std::getline(std::cin, new_input);
		index = std::stoi(new_input) - 1;
		if (index > MAX_CONTACTS)
			throw (std::invalid_argument("Index out of bounds (outside of MAX_CONTACTS)"));
		else if (index >= this->Total)
			throw (std::invalid_argument("No contacts at the specified Index."));
		else if (index < 0)
			throw (std::invalid_argument("Indexes start by 1!"));
		this->Contacts[index].Display();
	}
	catch(std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Invalid input!" << std::endl;
	}
}
