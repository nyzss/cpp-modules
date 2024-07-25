/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:59:59 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 11:06:30 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat_Animal")
{
	this->type = "WrongCat";
	std::cout << this->type <<  " has been constructed!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &value)
{
	this->type = value.type;
	std::cout << this->type <<  " has been constrcuted from " << value.type << "!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type <<  " has been destroyed!" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &value)
{
	if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << this->type <<  ": * Wrong Meow*" << std::endl;
}