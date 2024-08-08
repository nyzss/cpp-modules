/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:48:12 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 09:14:19 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

#include "easyfind.hpp"

int main(int ac, char **av)
{
	std::vector<int> vec;

	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	try
	{
		int find = 5;
		if (ac == 2)
			find = std::atoi(av[1]);
		std::cout << easyfind(vec, find) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}