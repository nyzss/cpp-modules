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

	std::cout << "RND: generated ";
	if (rnd == 0)
	{
		std::cout << "A class" << std::endl;
		item = new A();
	}
	else if (rnd == 1)
	{
		std::cout << "B class" << std::endl;
		item = new B();
	}
	else
	{
		std::cout << "C class" << std::endl;
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
		std::cout << "PTR: is class A" << std::endl;
	else if ((val = dynamic_cast<B*>(p)))
		std::cout << "PTR: is class B" << std::endl;
	else if ((val = dynamic_cast<C*>(p)))
		std::cout << "PTR: is class C" << std::endl;
	else
		std::cout << "uh oh small issue" << std::endl;
}

void Base::identify(Base& p)
{
	try
	{
		A val = dynamic_cast<A&>(p);
		std::cout << "REF: is class A" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

	try
	{
		B val = dynamic_cast<B&>(p);
		std::cout << "REF: is class B" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

	try
	{
		C val = dynamic_cast<C&>(p);
		std::cout << "REF: is class C" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
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
