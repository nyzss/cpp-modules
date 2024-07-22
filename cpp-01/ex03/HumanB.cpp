/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:52:07 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 19:14:47 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName) : weapon(NULL)
{
	this->name = newName;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << " attacks bare-handed, since he has no weapon!" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}
