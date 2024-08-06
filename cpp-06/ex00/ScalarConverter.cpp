/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:48:42 by okoca             #+#    #+#             */
/*   Updated: 2024/08/06 16:38:57 by okoca            ###   ########.fr       */
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
	std::cout << value << std::endl;
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
	size_t	counter;
	for (int i = 0; i < value.length(); i++)
	{
		if (isalpha(value[i]))
			counter++;
		if (counter > 2)
			return 1;
	}
	return (0);
}

void	ScalarConverter::Char(std::string value)
{
	std::cout << "char: " << value << std::endl;
}

void	ScalarConverter::Int(std::string value)
{
	std::cout << "int: " << value << std::endl;
}

void	ScalarConverter::Float(std::string value)
{
	std::cout << "float: " << value << std::endl;
}

void	ScalarConverter::Double(std::string value)
{
	std::cout << "double: " << value << std::endl;
}

void	ScalarConverter::nonValid()
{
	Char("invalid");
	Int("invalid");
	Float("invalid");
	Double("invalid");
}

int	ScalarConverter::handle(std::string value)
{
	if (value == "nan" || value == "-nan" || value == "-inf" || value == "inf"
		|| value == "nanf" || value == "-nanf" || value == "-inff" || value == "inff")
		ScalarConverter::specialDecimal(value);
	// else if (value == "nanf" || value == "-inff" || value == "inff")
	else if (ScalarConverter::checkValid(value))
		ScalarConverter::nonValid();
	else if (ScalarConverter::isFloat(value))
		ScalarConverter::doFloat(value);
}

void	ScalarConverter::convert(std::string value)
{
	for (int i = 0; i < value.length(); i++)
		value[i] = ::tolower(value[i]);
	std::cout << value << std::endl;
	std::cout << atof(value.c_str()) << std::endl;
	ScalarConverter::handle(value);
}