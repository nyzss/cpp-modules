/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:31:11 by okoca             #+#    #+#             */
/*   Updated: 2024/07/23 21:42:09 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits;

Fixed::Fixed()
{
	std::cout << "fixed constructor" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &a) : value(a.value)
{
	std::cout << "Copy constructor" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
		this->value = a.value;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "fixed destructor" << std::endl;
}

int	Fixed::getRawBits() const
{
	// return (this->value >> fractionalBits);
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
