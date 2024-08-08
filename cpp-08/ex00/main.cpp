/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:48:12 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 10:39:05 by okoca            ###   ########.fr       */
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
		std::map<std::string, int> map;
		map["hello"] = 10;
		map["wow"] = 5;
		map["haha"] = 2;
		map["cool"] = 25;
		map["hello world!"] = 89123;
		map["haha another element"] = 79;
		std::cout << easyfind_map(map, find) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}