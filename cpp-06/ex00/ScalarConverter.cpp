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
	if (value.rbegin()[0] == 'f')
		return 0;
	return 1;
}

int	ScalarConverter::isChar(std::string value)
{
	if (value.length() > 2)
		return (0);
	if (value.length() == 2)
	{
		if (value[0] != '-' || !isprint(value[1]))
			return (0);
	}
	else if (value.length() == 1 && !isprint(value[0]))
		return (0);
	return 1;
}

int	ScalarConverter::isDouble(std::string value)
{
	if (value.find(".") == std::string::npos)
		return 0;
	return (1);
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
	else if (ScalarConverter::isChar(value))
		ScalarConverter::doChar(value);
	else if (ScalarConverter::checkValid(value))
		ScalarConverter::nonValid();
	else if (ScalarConverter::isFloat(value))
		ScalarConverter::doFloat(value);
	else if (ScalarConverter::isDouble(value))
		ScalarConverter::doDouble(value);
	else
		ScalarConverter::doBasic(value);
}

void	ScalarConverter::convert(std::string value)
{
	for (size_t i = 0; i < value.length(); i++)
		value[i] = ::tolower(value[i]);
	ScalarConverter::handle(value);
}

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

