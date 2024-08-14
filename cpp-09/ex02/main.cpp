/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:13:05 by okoca             #+#    #+#             */
/*   Updated: 2024/08/14 15:40:05 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <sys/time.h>
#include <cstdlib>

#include "Pmerge.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "please provide more than 1 number aguments" << std::endl;
		return (1);
	}
	int	*args = new int[ac - 1]();
	for (int i = 0; i < ac - 1; i++)
		args[i] = std::atoi(av[i + 1]);

	try
	{
		std::vector<int> vec;
		for (int i = 0; i < ac - 1; i++)
			vec.push_back(args[i]);

		struct timeval tm1, tm2;
		gettimeofday(&tm1, NULL);
		std::vector<int> v = Pmerge::sort(vec);
		gettimeofday(&tm2, NULL);

		float time = float(tm2.tv_usec - tm1.tv_usec) / 1000;
		std::cout << "Pmerge::sort exec: " << time << " ms" << std::endl;

		std::cout << "Result: ";
		std::vector<int>::const_iterator it = v.begin();
		for (; it != v.end(); it++)
		{
			if (it > v.begin() + 10)
			{
				std::cout << "[...]";
				break ;
			}
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete[] args;
}
