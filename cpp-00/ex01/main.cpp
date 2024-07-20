/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:53:00 by okoca             #+#    #+#             */
/*   Updated: 2024/07/20 20:11:46 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"

int main()
{
	std::string	input;
	while (1)
	{
		std::cin >> input;
		if (input.compare("exit") == 0)
			break ;
	}
	std::cout << "exit..." << std::endl;
	return (0);
}