/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:44:06 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 10:49:32 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdint.h>

class Span
{
private:
	const	uint32_t _size;
	int		*arr;
	Span ();
public:
	Span (const unsigned int &n);
	Span (const Span &value);
	~Span ();
	Span & operator=(const Span &value);
};

#endif /* SPAN_HPP */
