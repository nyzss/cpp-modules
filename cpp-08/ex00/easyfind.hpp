/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:52:41 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 09:15:09 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
int	&easyfind(T& container, int number)
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

#endif /* EASYFIND_HPP */
