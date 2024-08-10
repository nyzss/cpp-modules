/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:29:49 by okoca             #+#    #+#             */
/*   Updated: 2024/08/10 13:29:49 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include <RPN.hpp>

static void	err(const char *s)
{
	std::cerr << s << std::endl;
	exit(1);
}

int main(int ac, char **av)
{
	if (ac != 2)
		err("program needs a single argument to run.");
	try
	{
		RPN::calculate(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// Input: 2 1 + 3 *
// Output: 9

// Input: 4 13 5 / +
// Output: 6

// Input: 10 6 9 3 + -11 * / * 17 + 5 +
// Output: 22