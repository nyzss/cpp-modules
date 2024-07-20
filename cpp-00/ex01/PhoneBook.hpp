/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:09:03 by okoca             #+#    #+#             */
/*   Updated: 2024/07/20 22:05:03 by okoca            ###   ########.fr       */
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
public:
	PhoneBook();
	int AddContact(Contact NewContact);
	void Add();
	void Search();
};

PhoneBook::PhoneBook()
{
	LastAdded = 0;
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
}

void PhoneBook::Search()
{
}

#endif