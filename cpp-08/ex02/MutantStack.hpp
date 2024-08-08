/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:07:37 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 16:28:48 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack
{
private:
public:
	MutantStack ();
	MutantStack (const MutantStack &value);
	~MutantStack ();
	class iterator : public std::iterator
	{
	}
	MutantStack & operator=(const MutantStack &value);
};

#endif /* MUTANTSTACK_HPP */
