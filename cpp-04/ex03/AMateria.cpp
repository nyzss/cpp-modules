/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:26:46 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 16:51:45 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "AMatera constrcuted" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "AMatera constrcuted" << this->type << std::endl;
}

AMateria::AMateria(const AMateria &value)
{
	this->type = value.type;
	std::cout << "AMatera constrcuted" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMatera destructed" << std::endl;
}

AMateria & AMateria::operator=(const AMateria &value)
{
	if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Using AMateria on " << target.getName() << std::endl;
}