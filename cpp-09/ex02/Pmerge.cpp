/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmerge.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:43:37 by okoca             #+#    #+#             */
/*   Updated: 2024/08/14 15:40:16 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pmerge.hpp"
#include <iostream>



// [7, 8, 5, 9, 11, 0, 2, 1, 10, 3, 4, 6]

//  Apairrer: [(7, 8), (5, 9), (11, 0), (2, 1), (10, 3), (4, 6)]

// . Comparer*: [8, 9, 11, 2, 10, 6] et... Récursion
// (on va trier cette nouvelle liste de la même manière que la première,
// donc une bullet en plus, mais la récursion, c'est la phase 2 de l'algo:
// on reprendra pour la phase 3 quand l'appel récursif suivant me renverra cette liste triée):

// .. Apairrer: [(8, 9), (11, 2), (10, 6)]

// .. Comparer**: [9, 11, 10] et... Récursion:

// ... Apairrer: [(9 , 11)] je peux pas faire de paire avec le 10, je le garde pour plus tard.

// ... Comparer***: [11] et... Récursion:

// .... Critère d'arrêt atteint (liste de taille 1): je retourne la liste [11]...
// Et je commence à "remonter" ma chaîne d'appels (je repasse à 3 bullets).

// ... Insérer: l'élément appairé à 11, le 9**, j'ai la liste [9, 11].
// J'insère le 10 que je m'étais gardé pour plus tard et je retourne la liste [9, 10, 11]

// .. Insérer: d'abord l'élément appairé au plus petit élément, 9,
// ici c'est 8*, j'ai la liste [8, 9]. Ensuite, j'insère l'élément apairré à 11,
// ici le 2 dans la liste [8, 9, 10] (en fait, dans la liste [8, 9, (10, 6)]...),
// puis l'élément apairré à 10 (le 6) dans la liste [2, 8, 9].
//Je retourne la liste [2, 6, 8, 9, 10, 11]

// . Insérer: d'abord l'élément appairé à 2, puis celui appairé à  8,
// suivi de celui appairé à 6, ensuite celui appairé à  10,
// suivi de celui à 9, puis à 11 (suivant Jacobsthal...)
// et j'ai la liste [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11] à renvoyer.

// inline std::vector<int> Pmerge::merge(const std::vector<int> &arr)
// {
// }

std::vector<int>	Pmerge::sort(const std::vector<int> &vec)
{
	// paired up numbers, if odd then the last pair is first_num == second_num
	if (vec.size() == 1)
		return vec;
	std::vector<int> big;
	big.reserve(vec.size() >> 1);
	std::vector<std::pair<int, int> > pairs = pair_up(vec);
	std::vector<std::pair<int, int> >::const_iterator it;
	for (it = pairs.begin(); it != pairs.end(); it++)
	{
		if ((*it).first == (*it).second)
			continue;
		big.push_back((*it).second);
	}
	big = sort(big);
	for (it = pairs.begin(); it != pairs.end(); it++)
	{
		std::vector<int>::iterator pos = std::upper_bound(big.begin(), big.end(), (*it).first);
		big.insert(pos, (*it).first);
	}
	return big;
}

inline std::vector<std::pair<int, int> > Pmerge::pair_up(const std::vector<int> &v)
{
	std::vector<std::pair<int, int> > pairs;
	pairs.reserve(v.size() / 2);
	std::vector<int>::const_iterator c_it = v.begin();
	for (; c_it < v.end(); c_it += 2)
	{
		std::vector<int>::const_iterator next = c_it + 1;
		if (next != v.end())
		{
			pairs.push_back(std::make_pair(*c_it, *next));
			std::pair<int, int> &p = pairs.back();
			if (p.first > p.second)
				std::swap(p.first, p.second);
		}
	}
	if (v.size() % 2 != 0)
		pairs.push_back(std::make_pair(v.back(), v.back()));
	return pairs;
}

// std::vector<int>	Pmerge::sort(std::vector<int> v)
// {
// 	std::vector<int> a;
// 	a.reserve(v.size());
// 	std::vector<std::pair<int, int> > pairs = pair_up(v);
// 	std::vector<std::pair<int, int> >::const_iterator c_it;

// 	for (c_it = pairs.begin(); c_it != pairs.end(); c_it++)
// 	{
// 		if ((*c_it).first == (*c_it).second)
// 			continue;
// 		a.push_back((*c_it).second);
// 	}
// 	// a = merge(a);
// 	t cpy(v.begin(), v.end());
// 	merge_opt(cpy.begin(), cpy.end(), v.begin(), v.end());

// 	for (c_it = pairs.begin(); c_it != pairs.end(); c_it++)
// 	{
// 		std::vector<int>::iterator pos = std::upper_bound(a.begin(), a.end(), (*c_it).first);
// 		a.insert(pos, (*c_it).first);
// 	}

// 	return a;
// }

// // this is another way of doing it
// inline std::vector<int> Pmerge::merge_v2(std::vector<int> &arr)
// {
// 	if (arr.size() <= 1)
// 		return arr;
// 	else if (arr.size() == 2)
// 	{
// 		if (arr[0] > arr[1])
// 		std::swap(arr[0], arr[1]);
// 		return arr;
// 	}
// 	const std::vector<int> &a = arr;
// 	std::vector<int>::const_iterator it = a.begin();
// 	std::advance(it, a.size() / 2);

// 	std::vector<int> left_half(a.begin(), it);
// 	const std::vector<int> right_half(it, a.end());
// 	left_half = merge(left_half);

// 	std::vector<int>::const_iterator right_it = right_half.begin();
// 	for (; right_it != right_half.end(); right_it++)
// 	{
// 		std::vector<int>::iterator pos;
// 		pos = std::upper_bound(left_half.begin(), left_half.end(), *right_it);
// 		left_half.insert(pos, *right_it);
// 	}
// 	return left_half;
// }

// std::vector<int>	Pmerge::sort_v2(std::vector<int> v)
// {
// 	std::vector<int>::iterator	mid_iter = v.begin();
// 	std::advance(mid_iter, v.size() / 2);
// 	std::vector<int>::iterator	start = v.begin();
// 	std::vector<int>::const_iterator	mid = mid_iter;
// 	for (; start != mid; start++)
// 	{
// 		if (*start < *mid_iter)
// 			std::swap(*start, *mid_iter);
// 		mid_iter++;
// 	}
// 	return merge(v);
// }
	// Pmerge::insert_sort(args);

// compare i and i - 1
// if i > i - 1 -> push i to the vec
// i++;

// 3, 1, 2, 6
// 3 > 1
// 3.push()
//
// i += 2

/*
* version with std::vector<int> instead of int array, idk why im keeping it here
*/
// std::vector<int>	Pmerge::insert_sort(const std::vector<int> &args)
// {
// 	std::vector<int>::const_iterator it = args.begin();
// 	for (; it != args.end(); it++)
// 	{
// 		if (*it != -1)
// 		{
// 			std::vector<int>::iterator pos = std::upper_bound(v.begin(), v.end(), *it);
// 			v.insert(pos, *it);
// 		}
// 	}
// }
// void	Pmerge::sort(int size, int args[])
// {
// 	std::vector<int> vec;
// 	for (int i = 0; i < size; i++)
// 		vec.push_back(args[i]);
// }

// void	Pmerge::sort(std::vector<int> args)
// {
// 	std::vector<int>::iterator	cur = args.begin();
// 	for (++cur; cur != args.end(); cur++)
// 	{
// 		std::vector<int>::iterator prev = --cur;
// 		if (*cur > *prev)
// 		{
// 			v.push_back(*cur);
// 			*cur = -1;
// 		}
// 		else
// 		{
// 			v.push_back(*prev);
// 			*prev = -1;
// 		}
// 		cur++;
// 	}
// 	v = merge(v);
// 	for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
// 		std::cout << *it << " ";
// 	std::cout << std::endl;
// }

// inline std::vector<int> Pmerge::merge(const std::vector<int> &arr)
// {
// 	size_t	arr_size = arr.size();
// 	if (arr_size <= 1)
// 		return arr;
// 	else if (arr_size == 2)
// 	{
// 		if (arr[0] > arr[1])
// 		{
// 			std::vector<int> r(arr);
// 			std::swap(r[0], r[1]);
// 			return r;
// 		}
// 		return arr;
// 	}
// 	std::vector<int>::const_iterator it = arr.begin() + arr_size / 2;

// 	const std::vector<int> left_half = merge(std::vector<int>(arr.begin(), it));
// 	const std::vector<int> right_half = merge(std::vector<int>(it, arr.end()));

// 	std::vector<int> res;
// 	res.reserve(left_half.size() + right_half.size());
// 	std::merge(left_half.begin(), left_half.end(), right_half.begin(), right_half.end(), std::back_inserter(res));
// 	return res;
// }
