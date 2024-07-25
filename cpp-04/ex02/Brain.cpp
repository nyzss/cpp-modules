/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:29:44 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 14:51:10 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() : maxIdeas(100)
{
	this->ideas = new std::string[maxIdeas];
	for (uint32_t i = 0; i < maxIdeas; i++)
		this->ideas[i] = "*empty thoughts";
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(uint32_t maxIdeas) : maxIdeas(maxIdeas)
{
	this->ideas = new std::string[maxIdeas];
	for (uint32_t i = 0; i < maxIdeas; i++)
		this->ideas[i] = "*empty thoughts";
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &value) : maxIdeas(value.maxIdeas)
{
	if (value.ideas)
	{
		for (uint32_t i = 0; i < maxIdeas; i++)
			this->ideas[i] = value.ideas[i];
	}
	std::cout << "Brain deep copy" << std::endl;
}

Brain::~Brain()
{
	if (this->ideas)
		delete[] this->ideas;
	std::cout << "Brain destroyed, reduced to ashes.." << std::endl;
}

Brain & Brain::operator=(const Brain &value)
{
	if (this != &value && value.ideas)
	{
		this->maxIdeas = value.maxIdeas;
		delete[] this->ideas;
		this->ideas = new std::string[this->maxIdeas];
		for (uint32_t i = 0; i < maxIdeas; i++)
			this->ideas[i] = value.ideas[i];
	}
	return *this;
}

const std::string Brain::getIdea(uint32_t n) const
{
	if (this->ideas && n < maxIdeas)
		return this->ideas[n];

	std::string	err = "[ERROR] This brain isn't sufficiently big enough to have that idea!";

	return err;
}

void	Brain::showIdeas() const
{
	if (this->ideas)
	{
		for (uint32_t i = 0; i < this->maxIdeas; i++)
			std::cout << "[" << i << "] " << this->ideas[i] << std::endl;
	}
}