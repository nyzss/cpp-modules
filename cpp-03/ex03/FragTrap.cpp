/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:43:40 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 22:32:41 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "No Name";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FRAGTRAP: " << this->name << " constructor!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FRAGTRAP: " << this->name << " constructor!" << std::endl;
}

FragTrap::FragTrap (const FragTrap &value) : ClapTrap(value.name)
{
	this->name = value.name;
	this->hitPoint = value.hitPoint;
	this->energyPoint = value.energyPoint;
	this->attackDamage = value.attackDamage;
	std::cout << "new FragTrap " << this->name << " copied from " << value.name << "!" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &value)
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->name << ": give me a high five guys!" << std::endl;
}