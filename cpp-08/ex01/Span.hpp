/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:44:06 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 11:36:38 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdint.h>
#include <cstring>

class Span
{
private:
	const uint32_t	_size;
	uint32_t		_last;
	int				*arr;
	Span ();
public:
	Span (const unsigned int &n);
	Span (const Span &value);
	~Span ();
	Span & operator=(const Span &value);
	void	addNumber(const int &val);
	void	empty();
	size_t	size() const;
	size_t	maxSize() const;
	const int& operator[](uint32_t idx) const;
};

std::ostream	&operator<<(std::ostream &s, const Span &sp);

#endif /* SPAN_HPP */
