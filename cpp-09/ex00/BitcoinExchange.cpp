/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:34:50 by okoca             #+#    #+#             */
/*   Updated: 2024/08/09 16:17:50 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string path)
{
	std::ifstream	input(path.c_str());
	if (!input)
		throw std::runtime_error("Couldn't find database file.");
	std::string	line;
	while (std::getline(input, line))
	{
		size_t	comma = line.find(',');
		std::string	f = line.substr(0, comma);
		std::string	rest = line.substr(comma + 1);
		float	s = std::atof(rest.c_str());
		this->data.insert(std::make_pair(f, s));
	}
	input.close();
}

float	BitcoinExchange::find(std::string date) const
{
	std::map<std::string, float, std::greater<std::string> >::const_iterator it;

	it = this->data.lower_bound(date);
	if (it == this->data.end() && this->data.end()->first != date)
		throw std::runtime_error("no such date is found.");
	std::cout << "date:\t     " << date << std::endl;
	std::cout << "lower_bound: " << it->first << std::endl;
	return it->second;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &val)
{
	this->data = val.data;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &val)
{
	if (this != &val)
		this->data = val.data;
	return *this;
}
