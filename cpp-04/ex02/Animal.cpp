/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:59:59 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 13:55:01 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Unknown Animal";
	std::cout << this->type <<  " has been constructed!" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << this->type <<  " has been constructed!" << std::endl;
}

Animal::Animal(const Animal &value)
{
	this->type = value.type;
	std::cout << this->type <<  " has been constrcuted from " << value.type << "!" << std::endl;
}

Animal::~Animal()
{
	std::cout << this->type <<  " has been destroyed!" << std::endl;
}

Animal & Animal::operator=(const Animal &value)
{
	if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << this->type <<  ": *Some animal sound*" << std::endl;
}

const std::string &	Animal::getType() const
{
	return this->type;
}