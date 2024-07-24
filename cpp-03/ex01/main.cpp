/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:45:18 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 17:49:22 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
}
