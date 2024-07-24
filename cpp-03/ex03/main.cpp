/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:45:18 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 22:48:40 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <limits>

int	main()
{
	FragTrap frag("NewOne");
	frag.highFivesGuys();

	DiamondTrap diamond("diamond");

	diamond.attack(frag.getName());
	diamond.takeDamage(43892432);
	diamond.whoAmI();
	DiamondTrap("luuuul").whoAmI();

	std::cout << "HP: " << diamond.getHitPoint() << std::endl;
	std::cout << "EP: " << diamond.getEnergyPoint() << std::endl;
	std::cout << "AD: " << diamond.getAttackDamage() << std::endl;
}
