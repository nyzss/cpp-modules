/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:52:59 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 14:13:45 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name);

int	main()
{
	int	n = 10;
	Zombie	*zombies = zombieHorde(n, "uh");

	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete[] zombies;
}
