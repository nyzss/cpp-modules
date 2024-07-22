/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:33:38 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 11:54:43 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie	*zombie = new Zombie(name);

	return (zombie);
}

void	randomChump(std::string name)
{
	Zombie	zombie(name);

	zombie.announce();
}

int main()
{
	Zombie	*abc = newZombie("Wow");

	abc->announce();
	delete abc;
	randomChump("Dell");
	randomChump("iMac");
	randomChump("Lenovo");
	Zombie	*def = newZombie("HP Omen");
	def->announce();
	delete def;

}