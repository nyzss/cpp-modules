/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:10:34 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 08:34:04 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

// : >, <, >=, <=, == and !=
class Fixed
{
private:
	int	value;
	static const int	fractionalBits = 8;
public:
	static	Fixed &max(Fixed &a, Fixed &b);
	static	const Fixed &max(const Fixed &a, const Fixed &b);
	static	Fixed &min(Fixed &a, Fixed &b);
	static	const Fixed &min(const Fixed &a, const Fixed &b);

	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &a);
	~Fixed();
	Fixed	&operator=(const Fixed &a);
	Fixed	operator+(const Fixed &a) const;
	Fixed	operator*(const Fixed &a) const;
	Fixed	operator-(const Fixed &a) const;
	Fixed	operator/(const Fixed &a) const;
	Fixed	operator++(int);
	Fixed	&operator++();
	Fixed	operator--(int);
	Fixed	&operator--();
	bool	operator>(const Fixed &a) const;
	bool	operator<(const Fixed &a) const;
	bool	operator>=(const Fixed &a) const;
	bool	operator<=(const Fixed &a) const;
	bool	operator==(const Fixed &a) const;
	bool	operator!=(const Fixed &a) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int	toInt() const;
	float	toFloat() const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &a);

#endif