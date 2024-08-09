/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:07:37 by okoca             #+#    #+#             */
/*   Updated: 2024/08/09 13:38:10 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class	Stack : public std::stack<T>
{
	public:

};

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack () : std::stack<T>() {};
	MutantStack (const MutantStack &value) : std::stack<T>()
	{
		this->c = value.c;
	};
	~MutantStack () {};
	typedef typename std::deque<T>::iterator		iterator;
	typedef typename std::deque<T>::const_iterator	const_iterator;
	const const_iterator begin() const
	{
		return this->c.begin();
	}
	const const_iterator end() const
	{
		return this->c.end();
	}
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
	MutantStack & operator=(const MutantStack &value)
	{
		if (this != &value)
		{
			this->c = value.c;
		}
		return *this;
	}
};

#endif /* MUTANTSTACK_HPP */
