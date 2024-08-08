/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:44:15 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 13:56:03 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0)
{
}

Span::Span(uint32_t size) : _size(size)
{
}

Span::Span(const Span &value) : _size(value._size)
{
	this->_size = value._size;
	this->set = value.set;
}

Span::~Span()
{
}

/*
	checks size of set if more than 2
	validates size of set (no span can be found)
*/
void Span::validate() const
{
	if (this->set.size() <= 1)
		throw std::logic_error("No span can be found. (size is less or equal to 1)");
}

/*
	check if `n` is in range of set.
	validates index (out of range)
*/
void Span::validate(uint32_t n) const
{
	if (n >= this->set.size())
		throw std::out_of_range("Out of range!");
}

Span & Span::operator=(const Span &value)
{
	if (this != &value)
	{
		this->_size = value._size;
		this->set = value.set;
	}
	return *this;
}

size_t	Span::size() const
{
	return this->set.size();
}

size_t	Span::maxSize() const
{
	return this->_size;
}

void	Span::addNumber(const int &val)
{
	if (this->set.size() >= this->_size)
		throw std::out_of_range("throws here");
	this->set.insert(val);
}

const int &Span::operator[](uint32_t idx) const
{
	this->validate(idx);
	std::set<int>::iterator it;

	for (it = this->set.begin(); it != this->set.end(); it++)
	{
		// std::cout << "IT: " << *it << std::endl;
		if (std::distance(this->set.begin(), it) == idx)
			return *it;
	}
	throw std::out_of_range("Out of range [index]");
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

uint32_t Span::shortestSpan() const
{
	this->validate();
	std::set<int>::iterator it;
	uint32_t	last;
	uint32_t	span;
	uint32_t	smallestSpan;

	last = *this->set.begin();
	smallestSpan = this->longestSpan();
	for (it = ++this->set.begin(); it != this->set.end(); it++)
	{
		span = *it - last;
		if (span < smallestSpan)
			smallestSpan = span;
		last = *it;
	}
	return smallestSpan;
	// std::cout << "HERE: " << *this->set.begin() << std::endl;
	// return *++this->set.begin() - *this->set.begin();
}

uint32_t Span::longestSpan() const
{
	this->validate();
	return *this->set.rbegin() - *this->set.begin();
}

void	Span::empty()
{
	this->set.empty();
}
