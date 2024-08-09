/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:52:41 by okoca             #+#    #+#             */
/*   Updated: 2024/08/09 14:10:28 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T, typename V>
typename T::value_type	easyfind(T& container, V val)
{
	typename T::value_type t = val;
	typename T::iterator it = std::find(container.begin(), container.end(), t);

	if (*it != t)
		throw std::logic_error("Couldn't find value.");
	return *it;
	// return container.find(number);
	// decided to throw error since we return an integer,
	// and if the value that is searched is is the INT_MAX
	// we wouldnt have a way to check if value is found/or not.
}

// associative containers -> need C++11 to only have one function.
template <typename T, typename V>
typename T::mapped_type	easyfind_m(T& container, V val)
{
	typename T::key_type t = val;
	typename T::iterator it = container.find(t);

	if (it->first != t)
		throw std::logic_error("Couldn't find value.");
	return it->second;
	// typename T::iterator ptr;
	// for (ptr = container.begin(); ptr != container.end(); ptr++)
	// {
	// 	if (ptr->second == number)
	// 		return (ptr->first);
	// }
}

#endif /* EASYFIND_HPP */
