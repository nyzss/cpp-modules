/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarLog.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:06:59 by okoca             #+#    #+#             */
/*   Updated: 2024/08/06 17:11:59 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

void	ScalarConverter::Char(long long val)
{
	if (!isprint(val))
		std::cout << "char: " << "non printable" << std::endl;
	// if (std::numeric_limits<char>::max())
	std::cout << "char: " << val << std::endl;
}

void	ScalarConverter::Int(long long val)
{
	std::cout << "int: " << val << std::endl;
}

void	ScalarConverter::Float(double val)
{
	std::cout << "float: " << val << std::endl;
}

void	ScalarConverter::Double(double val)
{
	std::cout << "double: " << val << std::endl;
}
