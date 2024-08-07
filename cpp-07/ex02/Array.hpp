/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:26:00 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 21:26:00 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
	T		*data;
	size_t	_size;

public:
	Array () : _size(0)
	{
		this->data = new T[this->_size];
	};
	Array (const Array &value) : _size(value._size)
	{
		this->data = new T[this->_size];
	}
	~Array ()
	{
		delete[] data;
	};
	Array & operator=(const Array &value)
	{
		if (this != &value)
		{
			delete[] this->data;
			this->_size = value._size;
			this->data = new T[this->_size];
			for (size_t i = 0; i < this->_size; i++)
				this->data[i] = value.data[i];
		}
		return *this;
	}
	T& operator[](size_t index);
	size_t	size() const
	{
		return this->_size;
	}
	class OutOfBoundsException : public std::exception
	{
		public:
			const char *what() const throw() { return "Index is out of bounds!"; }
	};
};

#endif /* ARRAY_HPP */
