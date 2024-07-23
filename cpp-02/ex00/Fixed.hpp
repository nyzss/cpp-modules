/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:10:34 by okoca             #+#    #+#             */
/*   Updated: 2024/07/23 13:32:12 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

// 00000000 00000000 00000000 11111111
class Fixed
{
private:
	int	value;
	static const int	fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &a);
	~Fixed();
	Fixed &operator=(const Fixed &a);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif