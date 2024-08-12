/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:13:05 by okoca             #+#    #+#             */
/*   Updated: 2024/08/12 09:39:10 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
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
	Pmerge::sort(ac - 1, args);
	delete[] args;
}
