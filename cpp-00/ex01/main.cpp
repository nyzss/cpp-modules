/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:53:00 by okoca             #+#    #+#             */
/*   Updated: 2024/07/21 21:20:37 by okoca            ###   ########.fr       */
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
	while (std::cout << "PhoneBook3000> " << std::flush && std::getline(std::cin, input))
	{
		for (int i = 0; i < input.length(); i++)
			input[i] = toupper(input[i]);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			Book.Add();
		else if (input == "SEARCH")
			Book.Search();
	}
	std::cout << "exit..." << std::endl;
	return (0);
}