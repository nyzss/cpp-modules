/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:05:49 by okoca             #+#    #+#             */
/*   Updated: 2024/08/09 13:34:47 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <cstdlib>
#include <string>
#include <vector>

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::srand(time(NULL));
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "MutantStack.top(): " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "MutantStack.size(): " << mstack.size() << std::endl;

		for (int i = 0; i < 50; i++)
			mstack.push(std::rand());
		mstack.push(104);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "MutantStack while loop: " << *it << std::endl;
			++it;
		}
		MutantStack<int> s(mstack);
	}

	std::cout << "--------- LIST --------" << std::endl;

	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << "std::list.top(): " << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << "std::list.size(): " << mstack.size() << std::endl;

		for (int i = 0; i < 50; i++)
			mstack.push_back(std::rand());
		mstack.push_back(104);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "std::list while loop: " << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
}