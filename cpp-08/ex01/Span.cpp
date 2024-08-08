/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:44:15 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 11:36:48 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0), _last(0)
{
	this->arr = new int[this->_size]();
}

Span::Span(const unsigned int& size) : _size(size), _last(0)
{
	this->arr = new int[this->_size]();
}

Span::Span(const Span &value) : _size(value._size), _last(0)
{
	this->arr = new int[this->_size]();
	for (size_t i = 0; i < this->_size; i++)
		this->addNumber(value.arr[i]);
}

Span::~Span()
{
	delete[] this->arr;
}

Span & Span::operator=(const Span &value)
{
	if (this != &value && value.arr)
	{
		this->empty();
		for (size_t i = 0; i < this->_size && i < value._size; i++)
			this->arr[i] = value.arr[i];
	}
	return *this;
}

void	Span::empty()
{
	std::memset(this->arr, 0, this->_size * sizeof(int));
	// long long	*arr = reinterpret_cast<long long*>(this->arr);
	// for (size_t i = 0; i < _size / 2; i++)
	// {
	// 	arr[i] = 0;
	// }
}

size_t	Span::size() const
{
	return this->_last;
}

size_t	Span::maxSize() const
{
	return this->_size;
}

void	Span::addNumber(const int &val)
{
	if (this->_last >= this->_size)
		throw std::out_of_range("Out of range!");
	this->arr[this->_last] = val;
	this->_last++;
}

const int &Span::operator[](uint32_t idx) const
{
	if (idx >= this->_last)
		throw std::out_of_range("Out of range!");
	return this->arr[idx];
}

std::ostream	&operator<<(std::ostream &s, const Span &sp)
{
	s << "[";
	for (size_t i = 0; i < sp.size(); i++)
	{
		s << sp[i] << (i == sp.size() - 1 ? "" : ", ");
	}
	s << "]";
	return s;
}
