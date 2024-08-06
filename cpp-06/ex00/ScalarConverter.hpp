/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:48:23 by okoca             #+#    #+#             */
/*   Updated: 2024/08/06 15:38:13 by okoca            ###   ########.fr       */
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
	static void	specialDouble(std::string value);
	static void	specialFloat(std::string value);
	static int	detectType(std::string value);
	virtual ~ScalarConverter () = 0;
};

#endif /* SCALARCONVERTER_HPP */
