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
	this->brain = new Brain;
	std::cout << this->type <<  " has been constructed!" << std::endl;
}

Cat::Cat(const Cat &value)
{
	this->type = value.type;
	this->brain = new Brain(*(value.brain));
	std::cout << this->type <<  " has been constructed from " << value.type << "!" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << this->type <<  " has been destroyed!" << std::endl;
}

Cat & Cat::operator=(const Cat &value)
{
	if (this != &value)
	{
		delete this->brain;
		this->type = value.type;
		this->brain = new Brain(*(value.brain));
	}
	return *this;
}

void	Cat::showIdeas(uint32_t n) const
{
	for (unsigned int i = 0; i < n; i++)
		std::cout << this->type << " has some ideas: " << this->brain->getIdea(i) << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << this->type <<  ": *Meow*" << std::endl;
}