/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:34:28 by okoca             #+#    #+#             */
/*   Updated: 2024/08/09 15:50:23 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# define DATE_LEN 10
# define MIN_RAW_ROW 14

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <ctime>
#include <iomanip>

class BitcoinExchange
{
private:
	static std::string	get_date(std::string raw);
	static double	get_value(std::string raw);
	typedef std::map<std::string, double, std::greater<std::string> > container;
	container data;
	BitcoinExchange () {};
public:
	typedef	std::pair<std::string, double> pair;
	typedef container::iterator iterator;
	typedef container::const_iterator const_iterator;
	BitcoinExchange (std::string path);
	BitcoinExchange (const BitcoinExchange &value);
	~BitcoinExchange ();
	BitcoinExchange & operator=(const BitcoinExchange &value);
	static void	validate_date(std::string date);
	double	find(std::string date) const;
	static BitcoinExchange::pair	get_pair(std::string raw);
};

#endif /* BITCOINEXCHANGE_HPP */
