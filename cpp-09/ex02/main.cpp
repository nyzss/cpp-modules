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

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "please provide more than 1 number aguments" << std::endl;
		return (1);
	}
	int	*args = new int[ac - 1]();
	for (int i = 0; i < ac - 1; i++)
	{
		args[i] = std::atoi(av[i + 1]);
		if (args[i] < 0)
		{
			std::cerr << "only positive integers." << std::endl;
			return (1);
		}
	}
	std::vector<int> dup_check;
	for (int i = 0; i < ac - 1; i++)
		dup_check.push_back(args[i]);
	std::sort(dup_check.begin(), dup_check.end());
	std::vector<int>::iterator it = std::adjacent_find(dup_check.begin(), dup_check.end());
	if (it != dup_check.end())
	{
		std::cerr << "no dup" << std::endl;
		return (1);
	}

	try
	{
		std::vector<int> vec;
		for (int i = 0; i < ac - 1; i++)
			vec.push_back(args[i]);

		struct timeval tm1, tm2;
		gettimeofday(&tm1, NULL);
		std::vector<int> v = PmergeMe::sort(vec);
		gettimeofday(&tm2, NULL);

		std::sort(vec.begin(), vec.end());

		if (vec == v)
			std::cout << "sorted succesfully!" << std::endl;

		float time = float(tm2.tv_usec - tm1.tv_usec) / 1000;
		std::cout << "PmergeMe::sort exec: " << time << " ms" << std::endl;

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
