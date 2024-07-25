/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:59:59 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 11:15:24 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Unknown WrongAnimal";
	std::cout << this->type <<  " has been constructed!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << this->type <<  " has been constructed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &value)
{
	this->type = value.type;
	std::cout << this->type <<  " has been constrcuted from " << value.type << "!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type <<  " has been destroyed!" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &value)
{
	if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << this->type <<  ": *Some Wrong Animal sound*" << std::endl;
}

const std::string &	WrongAnimal::getType() const
{
	return this->type;
}