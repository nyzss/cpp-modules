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

std::string	BitcoinExchange::get_date(std::string raw)
{
	size_t		v;
	std::string	f;

	if (raw.length() < MIN_RAW_ROW)
		throw std::logic_error("Invalid line");
	std::string::const_iterator	it;
	for (it = raw.begin(); it != raw.end(); it++)
	{
		if (std::isalpha(*it))
		throw std::logic_error("Invalid line");
	}
	if ((v = raw.find('|')) != std::string::npos)
	{
		f = raw.substr(0, v - 1);
	}
	BitcoinExchange::validate_date(f);
	return f;
}


void	BitcoinExchange::validate_date(std::string date)
{
	if (date.length() != DATE_LEN)
		throw std::logic_error("Invalid date");
	std::string::iterator	it;
	for (it = date.begin(); it != date.end(); it++)
	{
		if (std::isalpha(*it))
			throw std::logic_error("Invalid date");
	}
}

float	BitcoinExchange::find(std::string date) const
{
	BitcoinExchange::validate_date(date);

	std::map<std::string, float, std::greater<std::string> >::const_iterator it;
	it = this->data.lower_bound(date);

	if (it == this->data.end() && this->data.end()->first != date)
		throw std::runtime_error("no such date is found.");

	// std::cout << "date:\t     " << date << std::endl;
	// std::cout << "lower_bound: " << it->first << std::endl;
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
