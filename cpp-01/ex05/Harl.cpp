/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:18:11 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 21:27:29 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	for (size_t i = 0; i < level.length(); i++)
		level[i] = ::toupper(level[i]);
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*arr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::unlisted};
	for (int i = 0; i < 5; i++)
	{
		if (i == 4)
			(this->*arr[i])();
		else if (level == levels[i])
		{
			(this->*arr[i])();
			break ;
		}
	}
}

Harl::Harl()
{
	std::cout << "Harl constructor called." << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructor called." << std::endl;
}

void	Harl::debug()
{
	std::cout << "[DEBUG] ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[INFO] ";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[WARNING] ";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ERROR] ";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::unlisted()
{
	std::cout << "[IGNORE] ";
	std::cout << "Blabbering nonsense..." << std::endl;
}
