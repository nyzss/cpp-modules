/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:48:23 by okoca             #+#    #+#             */
/*   Updated: 2024/08/06 17:09:25 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <cmath>

enum Types
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
};

class ScalarConverter
{
private:
protected:
	ScalarConverter ();
	ScalarConverter (const ScalarConverter &value);
	ScalarConverter & operator=(const ScalarConverter &value);

public:
	static void	convert(std::string value);
	static void	specialDecimal(std::string value);
	static void	handle(std::string value);
	static int	isFloat(std::string value);
	static void	doFloat(std::string value);
	static void	Char(std::string value);
	static void	Int(std::string value);
	static void	Float(std::string value);
	static void	Double(std::string value);
	static void	Char(long long val);
	static void	Int(long long val);
	static void	Float(double val);
	static void	Double(double val);
	static int	checkValid(std::string value);
	static void	nonValid();
	virtual ~ScalarConverter () = 0;
};

#endif /* SCALARCONVERTER_HPP */
