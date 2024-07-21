/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:10:54 by okoca             #+#    #+#             */
/*   Updated: 2024/07/21 11:46:34 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	PhoneNumber;
public:
	Contact();
	void	InitContact();
	std::string	GetFirstName();
	std::string	GetLastName();
	std::string	GetNickname();
	int			GetPhone();
	std::string	GetDarkest();
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

int	Contact::GetPhone()
{
	return (this->PhoneNumber);
}

std::string	Contact::GetDarkest()
{
	return (this->DarkestSecret);
}

void	Contact::InitContact()
{
	std::string Firstname;
	std::string Lastname;
	std::string Nickname;
	std::string DarkestSecret;
	std::string TmpNumber;
	long long PhoneNumber;

	std::cout << "Enter a first name:" << std::endl;
	std::getline(std::cin, Firstname);
	std::cout << "Enter a last name:" << std::endl;
	std::getline(std::cin, Lastname);
	std::cout << "Enter a nickname:" << std::endl;
	std::getline(std::cin, Nickname);
	while (1)
	{
		std::cout << "Enter a phone number: " << std::endl;
		try
		{
			std::getline(std::cin, TmpNumber);
			PhoneNumber = std::stoll(TmpNumber);
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
	std::getline(std::cin, DarkestSecret);

	this->Firstname = Firstname;
	this->Lastname = Lastname;
	this->Nickname = Nickname;
	this->DarkestSecret = DarkestSecret;
	this->PhoneNumber = PhoneNumber;
}

#endif