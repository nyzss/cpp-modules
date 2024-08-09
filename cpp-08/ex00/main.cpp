/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:48:12 by okoca             #+#    #+#             */
/*   Updated: 2024/08/09 14:10:42 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdlib>

#include "easyfind.hpp"

int main(int ac, char **av)
{
	int find = 5;
	if (ac == 2)
		find = std::atoi(av[1]);
	try
	{
		std::vector<int> vec;

		for (int i = 0; i < 10; i++)
			vec.push_back(i);
		std::cout << easyfind(vec, find) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::map<int, std::string> map;
		map[1] = "hello";
		map[2] = "wow";
		map[3] = "haha";
		map[4] = "cool";
		map[5] = "hello world!";
		map[6] = "haha another element";
		std::cout << easyfind_m(map, find) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}