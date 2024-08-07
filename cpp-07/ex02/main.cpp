/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:35:52 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 21:35:52 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int>	arr(150);

	for (size_t i = 0; i < arr.size(); i++)
		arr[i] = i * 1500;

	std::cout << arr << std::endl;
	// std::cout << arr.size() << std::endl;
}