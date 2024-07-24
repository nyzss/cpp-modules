/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:55:37 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 10:25:43 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed x;
	Fixed y;
public:

	Point();
	Point(const float a, const float b);
	Point(const Point &a);
	~Point();
	Point &operator=(const Point &a);
	Fixed getX() const;
	Fixed getY() const;
};


#endif
