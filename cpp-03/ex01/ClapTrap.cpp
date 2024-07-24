/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:00:44 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 17:56:04 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "No name";
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	std::cout << this->name << " constructor!" << std::endl;
}

ClapTrap::ClapTrap(std::string value)
{
	this->name = value;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	std::cout << this->name << " constructor!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &value)
{
	this->name = value.name;
	this->hitPoint = value.hitPoint;
	this->energyPoint = value.energyPoint;
	this->attackDamage = value.attackDamage;
	std::cout << "new " << this->name << " copied from " << value.name << "!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " destroyed!" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &value)
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

void ClapTrap::attack(const std::string& target)
{
	if (!this->energyPoint || !this->hitPoint)
	{
		std::cout << "ClapTrap " << this->name << " has no " << (!this->energyPoint ? "energy points" : "hit points") << ", so it cannot attack.." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage!" << std::endl;
	this->hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->energyPoint || !this->hitPoint)
	{
		std::cout << "ClapTrap " << this->name << " has no " << (!this->energyPoint ? "energy points" : "hit points") << ", so it cannot be repaired.." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " gets repaired for " << amount << " hit points!" << std::endl;
	this->hitPoint += amount;
	this->energyPoint--;
}

std::string ClapTrap::getName()
{
	return (this->name);
}

unsigned int ClapTrap::getHitPoint()
{
	return (this->hitPoint);
}

unsigned int ClapTrap::getEnergyPoint()
{
	return (this->energyPoint);
}

unsigned int ClapTrap::getAttackDamage()
{
	return (this->attackDamage);
}