/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:45:18 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 18:20:44 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap("clap");
	ClapTrap trap("trap");

	clap.attack(trap.getName());

	trap.takeDamage(trap.getHitPoint());
	trap.attack(clap.getName());
	trap.beRepaired(10);
	clap = trap;

	ScavTrap scav("haha");
	ScavTrap haha;

	haha = scav;
	haha.guardGate();
	scav.attack(haha.getName());

	FragTrap frag("NewOne");

	frag.highFivesGuys();
	frag.takeDamage(10);
}
