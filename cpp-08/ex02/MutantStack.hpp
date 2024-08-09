/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:07:37 by okoca             #+#    #+#             */
/*   Updated: 2024/08/09 10:30:54 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

// template <typename T>
class	Stack : public std::stack<int>
{
	public:
		typedef std::deque<int>::iterator	iterator;
		iterator begin()
		{
			return iterator(this->c.begin());
		}
		iterator end()
		{
			return iterator(this->c.end());
		}
		// std::deque<int>::
};

// template <typename T>
// class MutantStack : public std::stack<T>
// {
// private:
// 	MutantStack ();
// public:
// 	MutantStack (const MutantStack &value);
// 	~MutantStack ();
// 	class iterator : public std::iterator
// 	{
// 	}
// 	iterator begin()
// 	{
// 		return (this->c.begin());
// 	};
// 	const iterator begin()
// 	{
// 		return (this->c.begin());
// 	};
// 	MutantStack & operator=(const MutantStack &value);
// };

#endif /* MUTANTSTACK_HPP */
