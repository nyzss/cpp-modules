/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:32:04 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 22:26:11 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap ();
	DiamondTrap (const std::string &name);
	DiamondTrap (const DiamondTrap &value);
	~DiamondTrap ();
	DiamondTrap & operator=(const DiamondTrap &value);
	using ScavTrap::attack;
	void whoAmI();
};

#endif /* DIAMONDTRAP_HPP */
