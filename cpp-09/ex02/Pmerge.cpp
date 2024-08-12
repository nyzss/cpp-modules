/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmerge.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:43:37 by okoca             #+#    #+#             */
/*   Updated: 2024/08/12 10:56:46 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pmerge.hpp"
#include <iostream>

std::vector<int>	Pmerge::v;
int					Pmerge::max_n;

// int *Pmerge::merge(int arr[], int size)
// {
// 	if (size == 2 && arr[0] > arr[1])
// 	{
// 		std::swap(arr[0], arr[1]);
// 		return arr;
// 	}
// }

std::vector<int> Pmerge::merge(std::vector<int> &arr)
{
	if (arr.size() <= 1)
		return arr;
	else if (arr.size() == 2)
	{
		if (arr[0] > arr[1])
		std::swap(arr[0], arr[1]);
		return arr;
	}
	std::vector<int>::iterator it = arr.begin();
	std::advance(it, arr.size() / 2);

	std::vector<int> left_half(arr.begin(), it);
	std::vector<int> right_half(it, arr.end());
	left_half = merge(left_half);
	right_half = merge(right_half);
	std::vector<int> res;
	std::merge(left_half.begin(), left_half.end(), right_half.begin(), right_half.end(), std::back_inserter(res));
	return res;
}

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
	v = merge(v);
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
