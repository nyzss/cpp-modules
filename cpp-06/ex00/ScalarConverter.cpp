/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:48:42 by okoca             #+#    #+#             */
/*   Updated: 2024/08/06 17:08:47 by okoca            ###   ########.fr       */
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

void	ScalarConverter::specialDecimal(std::string value)
{
	Char("impossible");
	Int("impossible");
	if (value == "nanf" || value == "nan")
	{
		Float("nanf");
		Double("nan");
	}
	else if (value == "-nanf" || value == "-nan")
	{
		Float("-nanf");
		Double("-nan");
	}
	else if (value == "inff" || value == "inf")
	{
		Float("inff");
		Double("inf");
	}
	else if (value == "-inff" || value == "-inf")
	{
		Float("-inff");
		Double("-inf");
	}
}

int	ScalarConverter::isFloat(std::string value)
{
	if (value.find(".") == std::string::npos)
		return 0;
	else if (value.find("f") == std::string::npos)
		return 0;
	return 1;
}

int	ScalarConverter::checkValid(std::string value)
{
	int	counter = 0;
	int	nonNumeric = 0;

	for (size_t i = 0; i < value.length(); i++)
	{
		if (!isprint(value[i]))
			return 1;
		if (isalpha(value[i]))
			counter++;
		if (!isalnum(value[i]))
			nonNumeric++;
	}
	if (counter > 1)
		return 1;
	else if (nonNumeric > 2)
		return 1;
	return (0);
}

void	ScalarConverter::handle(std::string value)
{
	if (value == "nan" || value == "-nan" || value == "-inf" || value == "inf"
		|| value == "nanf" || value == "-nanf" || value == "-inff" || value == "inff")
		ScalarConverter::specialDecimal(value);
	else if (ScalarConverter::checkValid(value))
		ScalarConverter::nonValid();
	else if (ScalarConverter::isFloat(value))
		ScalarConverter::doFloat(value);
}

void	ScalarConverter::convert(std::string value)
{
	for (size_t i = 0; i < value.length(); i++)
		value[i] = ::tolower(value[i]);
	// std::cout << value << std::endl;
	// std::cout << atof(value.c_str()) << std::endl;
	ScalarConverter::handle(value);
}