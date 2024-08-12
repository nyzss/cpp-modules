/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:13:05 by okoca             #+#    #+#             */
/*   Updated: 2024/08/12 11:35:20 by okoca            ###   ########.fr       */
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
	// std::vector<int> args;
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
		struct timeval tm1, tm2;
		gettimeofday(&tm1, NULL);
		std::vector<int> v = Pmerge::sort(ac - 1, args);
		gettimeofday(&tm2, NULL);

		std::cout << "exec: " << tm2.tv_usec - tm1.tv_usec << " us" << std::endl;

		std::cout << "Result: " << std::endl;
		for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete[] args;
}
