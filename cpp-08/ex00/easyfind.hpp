/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:52:41 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 10:39:57 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
int	easyfind(T& container, int number)
{
	for (size_t i = 0; i < container.size(); i++)
	{
		if (container[i] == number)
			return container[i];
	}
	// decided to throw error since we return an integer,
	// and if the value that is searched is is the INT_MAX
	// we wouldnt have a way to check if value is found/or not.
	throw std::logic_error("Couldn't find value.");
}

// associative containers -> need C++11 to only have one function.
template <typename T>
typename T::key_type	easyfind_map(T& container, int number)
{
	typename T::iterator ptr;
	for (ptr = container.begin(); ptr != container.end(); ptr++)
	{
		if (ptr->second == number)
			return (ptr->first);
	}
	throw std::logic_error("Couldn't find value.");
}

#endif /* EASYFIND_HPP */
