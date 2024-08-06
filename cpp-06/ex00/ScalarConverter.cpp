/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:48:42 by okoca             #+#    #+#             */
/*   Updated: 2024/08/06 15:38:49 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &value)
{
	(void)value;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &value)
{
	(void)value;
	return *this;
}

void	ScalarConverter::specialDouble(std::string value)
{
	std::cout << value << std::endl;
}

void	ScalarConverter::specialFloat(std::string value)
{
	std::cout << value << std::endl;
}

int	ScalarConverter::detectType(std::string value)
{
	if (value == "nan" || value == "-inf" || value == "inf")
		ScalarConverter::specialDouble(value);
	else if (value == "nanf" || value == "-inff" || value == "inff")
		ScalarConverter::specialFloat(value);
}

void	ScalarConverter::convert(std::string value)
{
	for (int i = 0; i < value.length(); i++)
		value[i] = ::tolower(value[i]);
	std::cout << value << std::endl;
	std::cout << atof(value.c_str()) << std::endl;
	ScalarConverter::detectType(value);
}