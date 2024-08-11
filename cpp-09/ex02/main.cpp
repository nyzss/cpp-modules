/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:13:05 by okoca             #+#    #+#             */
/*   Updated: 2024/08/11 17:13:05 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

#include "Pmerge.hpp"

int main(int ac, char **av)
{
	// std::vector<int> args;
	int	args[ac - 1] = {0};

	for (int i = 0; i < ac; i++)
		args[i] = std::atoi(av[i + 1]);

	Pmerge::sort(ac - 1, args);
}
