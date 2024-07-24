/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:08:26 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 10:20:27 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(0.0, 0.0);
	Point b(4.0, 0.0);
	Point c(2.0, 3.0);

	Point insidePoint(2.0, 1.0);
	Point outsidePoint(5.0, 5.0);

	std::cout << "[FIRST] SHOULD BE INSIDE: " << Point::bsp(a, b, c, insidePoint) << std::endl;
	std::cout << "[FIRST] SHOULD BE OUTSIDE: " << Point::bsp(a, b, c, outsidePoint) << std::endl;
	std::cout << std::endl;

    Point onVertex(0.0, 0.0);
    Point onEdge(2.0, 0.0);
    Point nearCenter(2.0, 1.0);
    Point outsideCloseToEdge(4.0, 3.0);
    Point farOutside(10.0, 10.0);
    Point centroid((0.0 + 4.0 + 2.0) / 3, (0.0 + 0.0 + 3.0) / 3);
    Point inLine(1.0, 0.0);

    std::cout << "On Vertex: " << Point::bsp(a, b, c, onVertex) << std::endl;
    std::cout << "On Edge: " << Point::bsp(a, b, c, onEdge) << std::endl;
    std::cout << "Near Center: " << Point::bsp(a, b, c, nearCenter) << std::endl;
    std::cout << "Close to Edge: " << Point::bsp(a, b, c, outsideCloseToEdge) << std::endl;
    std::cout << "Far Outside: " << Point::bsp(a, b, c, farOutside) << std::endl;
    std::cout << "Centroid: " << Point::bsp(a, b, c, centroid) << std::endl;
    std::cout << "Degenerate Case (In Line): " << Point::bsp(a, b, c, inLine) << std::endl;
	return 0;
}