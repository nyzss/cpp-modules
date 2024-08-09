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

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <ctime>

class BitcoinExchange
{
private:
	std::map<std::string, float, std::greater<std::string> > data;
	BitcoinExchange () {};
public:
	typedef std::map<std::string, float>::iterator iterator;
	typedef std::map<std::string, float>::const_iterator const_iterator;
	BitcoinExchange (std::string path);
	BitcoinExchange (const BitcoinExchange &value);
	~BitcoinExchange ();
	BitcoinExchange & operator=(const BitcoinExchange &value);
	static void	validate_date(std::string date);
	float	find(std::string date) const;
};

#endif /* BITCOINEXCHANGE_HPP */
