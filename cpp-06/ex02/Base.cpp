/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:25:46 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 19:25:46 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * Base::generate(void)
{
	int	rnd = std::rand() % 3;
	Base* item;

	if (rnd == 0)
	{
		std::cout << "RND: A class" << std::endl;
		item = new A();
	}
	else if (rnd == 1)
	{
		std::cout << "RND: B class" << std::endl;
		item = new B();
	}
	else
	{
		std::cout << "RND: C class" << std::endl;
		item = new C();
	}
	return item;
}

void Base::identify(Base* p)
{
	Base *val;
	// B *b;
	// C *c;

	if ((val = dynamic_cast<A*>(p)))
		std::cout << "this is A" << std::endl;
	else if ((val = dynamic_cast<B*>(p)))
		std::cout << "this is B" << std::endl;
	else if ((val = dynamic_cast<C*>(p)))
		std::cout << "this is C" << std::endl;
	else
		std::cout << "uh oh small issue" << std::endl;
}

void Base::identify(Base& p)
{
	(void)p;
}

Base::Base()
{
}

Base::Base(const Base &value)
{
	*this = value;
}

Base::~Base()
{
}

Base & Base::operator=(const Base &value)
{
	if (this != &value)
		*this = value;
	return *this;
}
