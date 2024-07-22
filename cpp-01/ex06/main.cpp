/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:01:17 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 21:39:48 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "One log level to hear from harl please!" << std::endl;
		return (1);
	}

	Harl	wow;

	std::string	logLevel = av[1];
	wow.complain(logLevel);
}
