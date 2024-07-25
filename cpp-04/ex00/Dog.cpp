/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:59:59 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 11:06:30 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog_Animal")
{
	this->type = "Dog";
	std::cout << this->type <<  " has been constructed!" << std::endl;
}

Dog::Dog(const Dog &value)
{
	this->type = value.type;
	std::cout << this->type <<  " has been constrcuted from " << value.type << "!" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type <<  " has been destroyed!" << std::endl;
}

Dog & Dog::operator=(const Dog &value)
{
	if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << this->type <<  ": *Bark*" << std::endl;
}