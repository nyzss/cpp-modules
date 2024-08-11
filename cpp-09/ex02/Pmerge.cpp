/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmerge.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:43:37 by okoca             #+#    #+#             */
/*   Updated: 2024/08/11 17:43:37 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pmerge.hpp"
#include <iostream>

std::vector<int>	v;
int					max_n;

void	Pmerge::sort(int max, int args[])
{
	max_n = max;
	// std::vector<int>::const_iterator it;
	for (int i = 0; i < max_n; i++)
		std::cout << args[i] << ' ';
	// for (it = arr.begin(); it != arr.end(); it++)
	// 	std::cout << *it << ' ';
	std::cout << std::endl;
}

