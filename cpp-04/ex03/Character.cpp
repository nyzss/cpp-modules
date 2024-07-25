/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:44:53 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 16:52:06 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	int	maxMateria = 4;
	this->total = 0;
	this->name = "No name adventurer";
	this->materias = new AMateria*[maxMateria];
	for (int i = 0; i < maxMateria; i++)
		this->materias[i] = NULL;
	std::cout << this->name << " has signed up as an adventurer" << std::endl;
}

Character::Character(const std::string & name)
{
	this->total = 0;
	this->name = name;
	this->materias = new AMateria*[maxMateria];
	for (int i = 0; i < maxMateria; i++)
		this->materias[i] = NULL;
	std::cout << this->name << " has signed up as an adventurer" << std::endl;
}

Character::Character(const Character &value)
{
	this->total = value.total;
	this->name = value.name;
	this->materias = new AMateria*[maxMateria];
	for (int i = 0; i < maxMateria; i++)
		this->materias[i] = value.materias[i]->clone();
	std::cout << this->name << " is a new student of " << value.name << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < maxMateria; i++)
		delete this->materias[i];
	delete[] this->materias;
	std::cout << this->name << " has been killed in battle.." << std::endl;
}

Character & Character::operator=(const Character &value)
{
	if (this != &value)
	{
		for (int i = 0; i < maxMateria; i++)
			delete this->materias[i];
		this->total = value.total;
		this->name = value.name;
		for (int i = 0; i < maxMateria; i++)
			this->materias[i] = value.materias[i]->clone();
	}
	return *this;
}

const std::string & Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria *m)
{
	if (total == maxMateria)
	{
		std::cout << this->name << " has reached the maximum amount of Materia to equip!" << std::endl;
		return ;
	}
	for (int i = 0; i < maxMateria; i ++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = m;
			this->total++;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (total == 0 || this->materias[idx] == NULL)
	{
		std::cout << this->name << " has no such materia to unequip!" << std::endl;
		return ;
	}
	else if (idx > maxMateria)
	{
		std::cout << this->name << " is that strong enough to have that many Materias!" << std::endl;
		return ;
	}
	std::cout << this->name <<  " has successfully unequiped the Materia " << this->materias[idx]->getType() << "!" << std::endl;
	this->materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->materias[idx] == NULL)
	{
		std::cout << this->name << " wasn't able to cast a Materia against " << target.getName() << std::endl;
	}
	std::cout << this->name << ": ";
	this->materias[idx]->use(target);
}