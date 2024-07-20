/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:29:46 by okoca             #+#    #+#             */
/*   Updated: 2024/07/20 18:40:39 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int ac, char **av)
{
	std::string str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	if (ac == 1)
	{
		std::cout << str;
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			for (size_t j = 0; j < str.length(); j++)
				str[j] = ::toupper(str[j]);
			std::cout << str;
			if (i + 1 != ac)
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
}