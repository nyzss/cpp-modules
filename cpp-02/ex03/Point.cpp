/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:55:35 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 10:24:05 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	std::cout << "default construc" << std::endl;
}

Point::Point(const float a, const float b) : x(a), y(b)
{
	std::cout << "float construc" << std::endl;
}

Point::Point(const Point &a) : x(a.x), y(a.y)
{
	std::cout << "copy construc" << std::endl;
}

Point::~Point()
{
	std::cout << "destructor" << std::endl;
}

Point &Point::operator=(const Point &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->x = a.x;
		this->y = a.y;
	}
	return *this;
}

Fixed	Point::getX() const
{
	return this->x;
}

Fixed	Point::getY() const
{
	return this->y;
}