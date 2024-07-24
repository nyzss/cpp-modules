/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:43:40 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 16:52:02 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{

}

ScavTrap & ScavTrap::operator=(const ScavTrap &value)
{
	if (this != &value)
	{
		// Copy data members from value to this object
	}
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << this->name << " is in Gate Keeper mode!" << std::endl;
}