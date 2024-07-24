/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:46:05 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 16:35:37 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string		name;
	unsigned int 	hitPoint;
	unsigned int 	energyPoint;
	unsigned int 	attackDamage;
public:
	ClapTrap ();
	ClapTrap (std::string value);
	ClapTrap (const ClapTrap &value);
	~ClapTrap ();
	ClapTrap & operator=(const ClapTrap &value);

	std::string getName();
	unsigned int getHitPoint();
	unsigned int getEnergyPoint();
	unsigned int getAttackDamage();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif /* CLAPTRAP_HPP */
