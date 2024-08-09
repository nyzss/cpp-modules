/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:24:39 by okoca             #+#    #+#             */
/*   Updated: 2024/08/09 15:52:03 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <BitcoinExchange.hpp>

void	err(const char *s)
{
	std::cerr << s << std::endl;
	exit (1);
}

int main(int ac, char **av)
{
	if (ac != 2)
		err("This program takes an input file to check with our database.");
	std::ifstream	s(av[1]);
	if (!s)
		err("Please pass in a valid file.");
	try
	{
		BitcoinExchange	be("data.csv");

		std::string	line;
		while (std::getline(s, line))
		{
			if (line == "date | value")
				continue ;
			BitcoinExchange::pair pair;

			try
			{
				pair = be.get_pair(line);
				std::cout << pair.first;
				std::cout << " => " << pair.second;
				std::cout << " = " << (pair.second * be.find(pair.first)) << "(" << be.find(pair.first) << ")" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}