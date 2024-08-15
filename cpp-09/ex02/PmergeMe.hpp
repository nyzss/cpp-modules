/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:41:44 by okoca             #+#    #+#             */
/*   Updated: 2024/08/14 15:35:41 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <algorithm>

class PmergeMe
{
private:
	PmergeMe () {};
	PmergeMe (const PmergeMe &value) { (void)value; };
	PmergeMe & operator=(const PmergeMe &value) { (void)value; return *this; };

// INACCURATE ONE
private:
	// static std::vector<int> merge_v2(std::vector<int> &arr) __attribute__((hot));
public:
	// static std::vector<int>	sort_v2(std::vector<int> vec);

// VALID ONE (most likely)
private:
	// typedef std::vector<int> t;
	// static std::vector<int> merge(const std::vector<int> &arr) __attribute__((hot));
	static std::vector<std::pair<int, int> > pair_up(const std::vector<int> &v) __attribute__((hot));
	static const std::vector<int>	generate_jacobsthal(size_t n);

public:
	~PmergeMe () {};
	static std::vector<int>	sort(const std::vector<int> &vec);
};

#endif /* PMERGEME_HPP */
