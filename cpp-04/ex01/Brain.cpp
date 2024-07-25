/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:29:44 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 13:44:59 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[MAX_IDEAS];
	for (int i = 0; i < MAX_IDEAS; i++)
		this->ideas[i] = "*empty thoughts";
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &value)
{
	if (value.ideas)
	{
		for (int i = 0; i < MAX_IDEAS; i++)
			this->ideas[i] = value.ideas[i];
	}
	std::cout << "Brain deep copy" << std::endl;
}

Brain::~Brain()
{
	if (this->ideas)
		delete[] this->ideas;
}

Brain & Brain::operator=(const Brain &value)
{
	if (this != &value && value.ideas)
	{
		for (int i = 0; i < MAX_IDEAS; i++)
			this->ideas[i] = value.ideas[i];
	}
	return *this;
}