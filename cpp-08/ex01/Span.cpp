/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:44:15 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 10:52:42 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0)
{
	this->arr = NULL;
}

Span::Span(const unsigned int& size) : _size(size)
{
	this->arr = new int[this->_size]();
}

Span::Span(const Span &value) : _size(value._size)
{
	this->arr = new int[this->_size]();
	for (size_t i = 0; i < this->_size; i++)
		this->arr[i] = value.arr[i];
}

Span::~Span()
{
	delete[] this->arr;
}

Span & Span::operator=(const Span &value)
{
	if (this != &value && value.arr)
	{
		for (size_t i = 0; i < this->_size && i < value._size; i++)
			this->arr[i] = value.arr[i];
	}
	return *this;
}
