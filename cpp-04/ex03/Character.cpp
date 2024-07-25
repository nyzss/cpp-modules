/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:44:53 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 15:45:12 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{

}

Character::Character(const Character &value)
{

}

Character::~Character()
{

}

Character & Character::operator=(const Character &value)
{
	if (this != &value)
	{
		// Copy data members from value to this object
	}
	return *this;
}