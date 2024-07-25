/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:30:37 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 15:36:56 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	std::cout << this->type << " constructed!" << std::endl;
}

Cure::Cure(const Cure &value)
{
	this->type = value.type;
	std::cout << this->type << " constructed from "<< value.type << "!" << std::endl;
}

Cure::~Cure()
{
	std::cout << this->type << " destroyed!" << std::endl;
}

Cure & Cure::operator=(const Cure &value)
{
	if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

AMateria* Cure::clone() const
{
	Cure	*newCure = new Cure;

	newCure->type = this->type;
	return newCure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals" << target.getName() << "’s wounds *" << std::endl;
}