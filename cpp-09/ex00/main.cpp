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

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "This program takes an input file to check with our database." << std::endl;
		return 1;
	}
	std::cout << av[1] << std::endl;
	try
	{
		BitcoinExchange	be("data.csv");

		// std::cout << BitcoinExchange::get_pair()
		std::cout << "pair first: " << be.get_pair("2021-06-05 | 246.8").first << std::endl;
		std::cout << "pair second: " << be.get_pair("2021-06-05 | 246.8").second << std::endl;
		// std::cout << be.find("2022-02-05") << std::endl;
		// std::cout <<  "-----------" << std::endl;
		// std::cout << be.find("2012-07-15") << std::endl;
		// std::cout <<  "-----------" << std::endl;
		// std::cout << be.find("2023-03-30") << std::endl;
		// std::cout <<  "-----------" << std::endl;
		// // std::cout << be.find("2009-01-01") << std::endl;
		// std::cout << be.find("4234") << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << "Not a valid date. " << e.what() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}