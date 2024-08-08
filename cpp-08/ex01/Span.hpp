/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:44:06 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 16:00:40 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdint.h>
#include <cstring>
#include <algorithm>
#include <set>

class Span
{
private:
	uint32_t	_size;

	Span ();
	void	validate(uint32_t n) const;
	void	validate() const;
public:
	std::set<int>	set;
	Span (uint32_t n);
	Span (const Span &value);
	~Span ();
	Span & operator=(const Span &value);
	void	addNumber(const int &val);
	void	more(uint32_t n);
	void	empty();
	size_t	size() const;
	size_t	maxSize() const;
 	uint32_t shortestSpan() const;
 	uint32_t longestSpan() const;
	const int& operator[](uint32_t idx) const;
};

std::ostream	&operator<<(std::ostream &s, const Span &sp);

#endif /* SPAN_HPP */
