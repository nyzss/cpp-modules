/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:30:37 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 16:08:04 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	std::cout << this->type << " constructed!" << std::endl;
}

Ice::Ice(const Ice &value)
{
	this->type = value.type;
	std::cout << this->type << " constructed from "<< value.type << "!" << std::endl;
}

Ice::~Ice()
{
	std::cout << this->type << " destroyed!" << std::endl;
}

Ice & Ice::operator=(const Ice &value)
{
	if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

AMateria* Ice::clone() const
{
	Ice	*newIce = new Ice;

	newIce->type = this->type;
	return newIce;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}