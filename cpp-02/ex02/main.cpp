/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:08:26 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 08:52:26 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;

	std::cout << ++a << std::endl;
	std::cout << a << std::endl;

	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << --a << std::endl;
	std::cout << a << std::endl;

	Fixed const c( Fixed( 5.6f ) / Fixed( 2 ) );
	std::cout << c << std::endl;

	Fixed const d( Fixed( 10 ) / Fixed( 2 ) );
	std::cout << d << std::endl;

	Fixed const e( Fixed( 15 ) / Fixed( 2 ) );
	std::cout << e << std::endl;
	return 0;
}