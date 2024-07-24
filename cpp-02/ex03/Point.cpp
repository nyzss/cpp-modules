/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:55:35 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 10:20:54 by okoca            ###   ########.fr       */
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


Fixed	Point::getArea(Point const a, Point const b, Point const c)
{
	Fixed	area = ( (a.x * (b.y - c.y)) + (b.x * (a.y - c.y)) + c.x * (a.y - b.y)) / 2;

	return area;
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	A = Point::getArea(a, b, c);

	Fixed	PAB = Point::getArea(point, a, b);
	Fixed	PBC = Point::getArea(point, b, c);
	Fixed	PAC = Point::getArea(point, a, c);

	return PAB + PBC + PAC == A;
}