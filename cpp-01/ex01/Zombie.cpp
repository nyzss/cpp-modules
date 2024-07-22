/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:57:22 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 14:12:19 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie constructor called, created without a name."<< std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie constructor called, created: " << this->name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destructor called, destroyed: " << this->name << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}