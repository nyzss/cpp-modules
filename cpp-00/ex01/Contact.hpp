/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:10:54 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 09:04:43 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <limits>
# include <iomanip>

class Contact
{
private:
	std::string Firstname;
	std::string Lastname;
	std::string Nickname;
	std::string DarkestSecret;
	std::string	PhoneNumber;
public:
	Contact();
	void	InitContact();
	std::string	GetFirstName();
	std::string	GetLastName();
	std::string	GetNickname();
	std::string	GetPhone();
	std::string	GetDarkest();
	void		Display();
};

Contact::Contact()
{
}

std::string	Contact::GetFirstName()
{
	return (this->Firstname);
}

std::string	Contact::GetLastName()
{
	return (this->Lastname);
}

std::string	Contact::GetNickname()
{
	return (this->Nickname);
}

std::string	Contact::GetPhone()
{
	return (this->PhoneNumber);
}

std::string	Contact::GetDarkest()
{
	return (this->DarkestSecret);
}

void		Contact::Display()
{
	std::cout << "---------------------------" << std::endl;
	std::cout << std::setw(20) << "First Name: " << std::left << std::setw(20) << this->Firstname << std::endl;
	std::cout << std::setw(20) << "Last Name: " << std::left << std::setw(20) << this->Lastname << std::endl;
	std::cout << std::setw(20) << "Nickname: " << std::left << std::setw(20) << this->Nickname << std::endl;
	std::cout << std::setw(20) << "Phone Number: " << std::left << std::setw(20) <<  this->PhoneNumber << std::endl;
	std::cout << std::setw(20) << "Darkest Secret: " << std::left << std::setw(20) <<  this->DarkestSecret << std::endl;
	std::cout << "---------------------------" << std::endl;
}

void	Contact::InitContact()
{
	std::string Firstname;
	std::string Lastname;
	std::string Nickname;
	std::string DarkestSecret;
	std::string PhoneNumber;

	std::cout << "Enter a first name:" << std::endl;
	std::cout << "> ";
	std::getline(std::cin, Firstname);
	std::cout << "Enter a last name:" << std::endl;
	std::cout << "> ";
	std::getline(std::cin, Lastname);
	std::cout << "Enter a nickname:" << std::endl;
	std::cout << "> ";
	std::getline(std::cin, Nickname);
	std::cout << "Enter a phone number: " << std::endl;
	while (1)
	{
		try
		{
			std::cout << "> ";
			std::getline(std::cin, PhoneNumber);
			if (std::cin.eof())
			{
				std::cin.clear();
				PhoneNumber.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				return ;
			}
			for (size_t i = 0; i < PhoneNumber.length(); i++)
			{
				if (isdigit(PhoneNumber[i]) == 0)
					throw (std::invalid_argument("Invalid argument"));
			}
			break ;
		}
		catch(const std::invalid_argument & e)
		{
			std::cout << "PhoneNumber: Please pass in a valid phone number! (Only digits)" << std::endl;
			std:: cout << "Try again: ";
		}
		catch(const std::out_of_range & e)
		{
			std::cout << "PhoneNumber: The phone number you passed is too big!" << std::endl;
			std:: cout << "Try again: ";
		}
	}
	std::cout << "Enter your darkest secret: " << std::endl;
	std::cout << "> ";
	std::getline(std::cin, DarkestSecret);

	this->Firstname = Firstname;
	this->Lastname = Lastname;
	this->Nickname = Nickname;
	this->DarkestSecret = DarkestSecret;
	this->PhoneNumber = PhoneNumber;
}

#endif