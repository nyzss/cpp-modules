/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:31:11 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 10:11:32 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : value(0)
{
	// std::cout << "fixed constructor" << std::endl;
}

Fixed::Fixed(const int i) : value(i << fractionalBits)
{
	// std::cout << "int constructor" << std::endl;
}

Fixed::Fixed(const float f) : value(roundf(f * (1 << fractionalBits)))
{
	// std::cout << "float constructor" << std::endl;
}

Fixed::Fixed(const Fixed &a) : value(a.value)
{
	// std::cout << "Copy constructor" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &a)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
		this->value = a.value;
	return *this;
}

int	Fixed::toInt() const
{
	return this->value >> fractionalBits;
}

float	Fixed::toFloat() const
{
	return (float)this->value / (1 << fractionalBits);
}

Fixed::~Fixed()
{
	// std::cout << "fixed destructor" << std::endl;
}

int	Fixed::getRawBits() const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

std::ostream	&operator<<(std::ostream &out, Fixed const &a)
{
	return out << a.toFloat();
}

bool	Fixed::operator>(const Fixed &a) const
{
	return this->value > a.value;
}

bool	Fixed::operator<(const Fixed &a) const
{
	return this->value < a.value;
}

bool	Fixed::operator>=(const Fixed &a) const
{
	return this->value >= a.value;
}

bool	Fixed::operator<=(const Fixed &a) const
{
	return this->value <= a.value;
}

bool	Fixed::operator==(const Fixed &a) const
{
	return this->value == a.value;
}

bool	Fixed::operator!=(const Fixed &a) const
{
	return this->value != a.value;
}

Fixed	Fixed::operator+(const Fixed &a) const
{
	Fixed	newFixed = *this;
	newFixed.value += a.value;

	return newFixed;
}

Fixed	Fixed::operator*(const Fixed &a) const
{
	Fixed	newFixed = *this;
	newFixed.value = roundf((float)(newFixed.toFloat() * a.toFloat()) * (1 << fractionalBits));

	return newFixed;
}

Fixed	Fixed::operator-(const Fixed &a) const
{
	Fixed	newFixed = *this;
	newFixed.value -= a.value;

	return newFixed;
}

Fixed	Fixed::operator/(const Fixed &a) const
{
	Fixed	newFixed = *this;
	newFixed.value = roundf((float)(newFixed.toFloat() / a.toFloat()) * (1 << fractionalBits));

	return newFixed;
}

Fixed	&Fixed::operator++()
{
	this->value += 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->operator++();

	return tmp;
}

Fixed	&Fixed::operator--()
{
	this->value -= 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->operator--();

	return tmp;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return a < b ? a : b;
}
