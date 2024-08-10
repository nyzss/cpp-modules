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
		double	s = std::atof(rest.c_str());
		this->data.insert(std::make_pair(f, s));
	}
}

std::string	BitcoinExchange::get_date(std::string raw)
{
	size_t v = raw.find('|');
	if (v == std::string::npos)
		throw std::logic_error("Invalid date");

	std::string f = raw.substr(0, v - 1);
	for (size_t i = 0; i < f.length(); i++)
	{
		if ((i < 4 || i == 5 || i == 6 || i == 8 || i == 9) && !std::isdigit(f[i]))
			throw std::logic_error("Invalid date");
		else if ((i == 4 || i == 7) && f[i] != '-')
			throw std::logic_error("Invalid date");
	}

	return f;
}

double	BitcoinExchange::get_value(std::string raw)
{
	size_t v = raw.find('|');
	if (v == std::string::npos)
		throw std::logic_error("Invalid date");

	std::string	f = raw.substr(v + 1);
	double	val = std::strtod(f.c_str(), NULL);
	if (val > 1000)
		throw std::logic_error("Error: number too high");
	else if (val < 0)
		throw std::logic_error("Error: number too low");
	return val;
}

BitcoinExchange::pair	BitcoinExchange::get_pair(std::string raw)
{
	if (raw.length() < MIN_RAW_ROW)
		throw std::logic_error("Invalid line");
	std::string::const_iterator	it;
	for (it = raw.begin(); it != raw.end(); it++)
	{
		if (std::isalpha(*it))
		throw std::logic_error("Invalid line");
	}

	BitcoinExchange::pair pair;
	pair.first = BitcoinExchange::get_date(raw);
	BitcoinExchange::validate_date(pair.first);
	pair.second = BitcoinExchange::get_value(raw);
	return pair;
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

double	BitcoinExchange::find(std::string date) const
{
	BitcoinExchange::validate_date(date);

	BitcoinExchange::const_iterator it;
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
