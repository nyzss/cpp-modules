/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:43:40 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 18:30:07 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "No Name";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "SCAVTRAP: " << this->name << " constructor!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "SCAVTRAP: " << this->name << " constructor!" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &value)
{
	this->name = value.name;
	this->hitPoint = value.hitPoint;
	this->energyPoint = value.energyPoint;
	this->attackDamage = value.attackDamage;
	std::cout << "new ScavTrap " << this->name << " copied from " << value.name << "!" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &value)
{
	if (this != &value)
	{
		this->name = value.name;
		this->hitPoint = value.hitPoint;
		this->energyPoint = value.energyPoint;
		this->attackDamage = value.attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " destroyed!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->name << " is in Gate Keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->energyPoint || !this->hitPoint)
	{
		std::cout << "ScavTrap " << this->name << " has no " << (!this->energyPoint ? "energy points" : "hit points") << ", so it cannot attack.." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " from the scav gang attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoint--;
}