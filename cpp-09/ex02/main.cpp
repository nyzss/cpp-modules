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
	int	*args = check_args(ac, av);

	std::cout << "-------VEC-------" << std::endl;
	try
	{
		do_vec(args, ac - 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------DEQ-------" << std::endl;

	try
	{
		do_deq(args, ac - 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "   --------" << std::endl;

	delete args;
}
