/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:31:54 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 22:48:07 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "No name";
	ClapTrap::name = this->name + "_clap_name";
	this->hitPoint = FragTrap::getHitPoint();
	this->energyPoint = ScavTrap::getEnergyPoint();
	this->attackDamage = FragTrap::getAttackDamage();
	std::cout << "DIAMONDTRAP: " << this->name << " called default constructor!" << std::endl;
}

DiamondTrap::DiamondTrap (const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoint = FragTrap::getHitPoint();
	this->energyPoint = ScavTrap::getEnergyPoint();
	this->attackDamage = FragTrap::getAttackDamage();
	std::cout << "DIAMONDTRAP: " << this->name << " called name constructor!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &value) : ClapTrap(value.name + "_clap_name"), ScavTrap(value.name + "_clap_name"), FragTrap(value.name + "_clap_name")
{
	ClapTrap::name = name + "_clap_name";
	this->name = value.name;
	this->hitPoint = value.hitPoint;
	this->energyPoint = value.energyPoint;
	this->attackDamage = value.attackDamage;
	std::cout << "new DiamondTrap " << this->name << " copied from " << value.name << "!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DIAMONDTRAP: " << this->name << " called destructor!" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &value)
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

void DiamondTrap::whoAmI()
{
	std::cout << "I am the diamond " << this->name << ", I was once known as " << ClapTrap::name << std::endl;
}