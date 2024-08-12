/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmerge.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:41:44 by okoca             #+#    #+#             */
/*   Updated: 2024/08/12 11:36:18 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PMERGE_HPP
# define PMERGE_HPP

#include <vector>
#include <algorithm>

class Pmerge
{
private:
	Pmerge () {};
	Pmerge (const Pmerge &value) { (void)value; };
	Pmerge & operator=(const Pmerge &value) { (void)value; return *this; };

private:
	static std::vector<int>	v;
	static int				max_n;

public:
	~Pmerge () {};
	static std::vector<int>	sort(int max, int args[]);
	static std::vector<int> merge(std::vector<int> &arr);
	static void	insert_sort(const int args[]);
	// static std::vector<int>	insert_sort(const std::vector<int> &vec);
};

#endif /* PMERGE_HPP */


// static void	sort(std::vector<int> args);