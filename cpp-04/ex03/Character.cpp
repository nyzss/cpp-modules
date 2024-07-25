/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:44:53 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 15:55:07 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->total = 0;
	this->name = "No name adventurer";
	this->materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	std::cout << this->name << " has signed up as an adventurer" << std::endl;
}

Character::Character(const std::string & name)
{
	this->total = 0;
	this->name = name;
	this->materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	std::cout << this->name << " has signed up as an adventurer" << std::endl;
}

Character::Character(const Character &value)
{
	this->total = value.total;
	this->name = value.name;
	this->materias = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->materias[i] = value.materias[i];
	std::cout << this->name << " is a new student of " << value.name << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->materias[i];
	delete[] this->materias;
	std::cout << this->name << " has been killed in battle.." << std::endl;
}

Character & Character::operator=(const Character &value)
{
	if (this != &value)
	{
		this->total = value.total;
		this->name = value.name;
		this->materias = new AMateria*[4];
		for (int i = 0; i < 4; i++)
			this->materias[i] = value.materias[i];
	}
	return *this;
}