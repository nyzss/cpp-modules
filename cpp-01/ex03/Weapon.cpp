/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:47:26 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 19:07:52 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}

Weapon::Weapon()
{
	std::cout << "Weapon constructor without any weapon!" << std::endl;
}

Weapon::Weapon(std::string def)
{
	this->setType(def);
	std::cout << "Weapon constructor with weapon: " << def << std::endl;
}
Weapon::~Weapon()
{
	std::cout << "Weapon destructor" << std::endl;
}