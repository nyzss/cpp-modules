/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:34:37 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 19:34:37 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
}

A::A(const A &value) : Base()
{
	(void) value;
}

A::~A()
{
}

A & A::operator=(const A &value)
{
	(void) value;
	return *this;
}
