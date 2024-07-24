/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:22:16 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 10:25:46 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	getArea(Point const a, Point const b, Point const c)
{
	Fixed	area = (
		(a.getX() * (b.getY() - c.getY()))
		+ (b.getX() * (a.getY() - c.getY()))
		+ c.getX() * (a.getY() - b.getY())) / 2;

	return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	A = getArea(a, b, c);

	Fixed	PAB = getArea(point, a, b);
	Fixed	PBC = getArea(point, b, c);
	Fixed	PAC = getArea(point, a, c);

	return PAB + PBC + PAC == A;
}