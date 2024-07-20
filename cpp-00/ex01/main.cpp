/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:53:00 by okoca             #+#    #+#             */
/*   Updated: 2024/07/20 21:55:12 by okoca            ###   ########.fr       */
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
		std::cin >> input;
		if (input.compare("exit") == 0)
			break ;
		else if (input.compare("add") == 0)
			Book.Add();
	}
	std::cout << "exit..." << std::endl;
	return (0);
}