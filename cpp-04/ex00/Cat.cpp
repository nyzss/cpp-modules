/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:59:59 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 11:06:30 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat_Animal")
{
	this->type = "Cat";
	std::cout << this->type <<  " has been constructed!" << std::endl;
}

Cat::Cat(const Cat &value)
{
	this->type = value.type;
	std::cout << this->type <<  " has been constrcuted from " << value.type << "!" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type <<  " has been destroyed!" << std::endl;
}

Cat & Cat::operator=(const Cat &value)
{
	if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << this->type <<  ": *Meow*" << std::endl;
}