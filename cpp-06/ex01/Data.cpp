/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:19:17 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 16:19:17 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : name("Default"), age(100)
{
}

Data::Data(std::string name, int age) : name(name), age(age)
{
}

Data::Data(const Data &value)
{
	*this = value;
}

Data::~Data()
{
	std::cout << "ded" << std::endl;
}

Data & Data::operator=(const Data &value)
{
	if (this != &value)
	{
		*this = value;
	}
	return *this;
}

const std::string &Data::getName() const
{
	return this->name;
}
int Data::getAge() const
{
	return this->age;
}

void	Data::setName(std::string name)
{
	this->name = name;
}
void	Data::setAge(int age)
{
	this->age = age;
}

std::ostream	&operator<<(std::ostream &stream, const Data &data)
{
	stream << "My name is: " << data.getName() << " and I am " << data.getAge() << " years old!";
	return stream;
}