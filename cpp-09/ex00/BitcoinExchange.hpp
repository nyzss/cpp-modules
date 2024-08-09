/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:34:28 by okoca             #+#    #+#             */
/*   Updated: 2024/08/09 15:10:59 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
private:
	std::map<std::string, float> data;
	BitcoinExchange () {};
public:
	BitcoinExchange (std::string path);
	BitcoinExchange (const BitcoinExchange &value);
	~BitcoinExchange ();
	BitcoinExchange & operator=(const BitcoinExchange &value);
};

#endif /* BITCOINEXCHANGE_HPP */
