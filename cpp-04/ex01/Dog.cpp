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
	this->brain = new Brain;
	std::cout << this->type <<  " has been constructed!" << std::endl;
}

Dog::Dog(const Dog &value)
{
	this->type = value.type;
	this->brain = new Brain(*(value.brain));
	std::cout << this->type <<  " has been constructed from " << value.type << "!" << std::endl;
}

Dog::~Dog()
{
	if (this->brain)
		delete this->brain;
	std::cout << this->type <<  " has been destroyed!" << std::endl;
}

Dog & Dog::operator=(const Dog &value)
{
	if (this != &value)
	{
		this->type = value.type;
		this->brain = new Brain(*(value.brain));
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << this->type <<  ": *Bark*" << std::endl;
}

void	Dog::showIdeas(uint32_t n) const
{
	for (unsigned int i = 0; i < n; i++)
		std::cout << this->brain->getIdea(i) << std::endl;
}
