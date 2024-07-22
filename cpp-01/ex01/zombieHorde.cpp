/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:53:59 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 14:11:01 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	if (n <= 0)
	{
		std::cerr << "Please provide a correct size!" << std::endl;
		return (NULL);
	}
	Zombie	*zombies = new Zombie[n];

	for (int i = 0; i < n; i++)
		zombies[i].setName(name);

	return (zombies);
}
