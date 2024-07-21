/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:53:00 by okoca             #+#    #+#             */
/*   Updated: 2024/07/21 13:15:51 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"

int main()
{
	std::string	input;
	PhoneBook	Book;

	std::cout << "Welcome to my Phone Book!" << std::endl;
	std::cout << "You have the following commands available:" << std::endl;
	std::cout << "[ADD] [SEARCH] [EXIT]" << std::endl;
	while (1)
	{
		std::cout << "PhoneBook3000> " << std::flush;
		std::getline(std::cin, input);
		for (int i = 0; i < input.length(); i++)
			input[i] = toupper(input[i]);
		if (input.compare("EXIT") == 0)
			break ;
		else if (input.compare("ADD") == 0)
			Book.Add();
		else if (input.compare("SEARCH") == 0)
			Book.Search();
	}
	std::cout << "exit..." << std::endl;
	return (0);
}