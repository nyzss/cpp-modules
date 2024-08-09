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
	return this->data.at(date);
}

time_t	BitcoinExchange::convert(const std::string& date) const
{
	#pragma clang diagnostic push
	#pragma clang diagnostic ignored "-Wmissing-field-initializers"
	struct	tm tm = {0};
	#pragma clang diagnostic pop

	int y, m, d;
	std::string	tmp = date;
	size_t	last;

	last = tmp.find('-');
	if (last == std::string::npos)
		throw std::out_of_range("Date invalid 0");
	y = std::atoi(tmp.substr(0, last).c_str());
	tmp = tmp.substr(last + 1);

	last = tmp.find('-');
	if (last == std::string::npos)
		throw std::out_of_range("Date invalid 1");
	m = std::atoi(tmp.substr(0, last).c_str());
	tmp = tmp.substr(last + 1);

	d = std::atoi(tmp.c_str());

	tm.tm_year = y - 1900;
	tm.tm_mon = m - 1;
	tm.tm_mday = d;

	time_t t = mktime(&tm);
	return t;
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
