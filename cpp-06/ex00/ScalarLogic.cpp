/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarLogic.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:23:23 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 14:23:23 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::doFloat(std::string value)
{
	float	val;

	val = float(atof(value.c_str()));
	Char(static_cast<long long>(val));
	Int(static_cast<long long>(val));
	Float(val);
	Double(static_cast<double>(val));
}

void	ScalarConverter::doDouble(std::string value)
{
	double	val;

	val = double(atof(value.c_str()));
	Char(static_cast<long long>(val));
	Int(static_cast<long long>(val));
	Float(static_cast<float>(val));
	Double(val);
}

void	ScalarConverter::doBasic(std::string value)
{
	long long	val;

	val = atoll(value.c_str());
	Char(val);
	Int(val);
	Float(static_cast<float>(val));
	Double(static_cast<double>(val));
}
