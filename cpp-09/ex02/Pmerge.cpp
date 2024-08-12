/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmerge.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:43:37 by okoca             #+#    #+#             */
/*   Updated: 2024/08/12 09:40:41 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pmerge.hpp"
#include <iostream>

std::vector<int>	Pmerge::v;
int					Pmerge::max_n;

void	Pmerge::sort(int max, int args[])
{
	max_n = max;
	for (int i = 1; i < max_n; i++)
	{
		if (args[i] > args[i - 1])
		{
			v.push_back(args[i]);
			args[i] = -1;
		}
		else
		{
			v.push_back(args[i - 1]);
			args[i - 1] = -1;
		}
		i += 1;
	}
	for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	for (int i = 0; i < max_n; i++)
	{
		if (args[i] != -1)
			std::cout << "i: " << args[i] << std::endl;
	}
}

// compare i and i - 1
// if i > i - 1 -> push i to the vec
// i++;

// 3, 1, 2, 6
// 3 > 1
// 3.push()
//
// i += 2
