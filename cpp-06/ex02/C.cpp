/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:34:37 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 19:34:37 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
}

C::C(const C &value) : Base()
{
	*this = value;
}

C::~C()
{
}

C & C::operator=(const C &value)
{
	if (this != &value)
		*this = value;
	return *this;
}
