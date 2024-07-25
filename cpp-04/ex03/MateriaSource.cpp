/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:18:10 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 16:58:12 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	maxMateria = 4;
	this->total = 0;
	this->materias = new AMateria*[maxMateria];
	for (int i = 0; i < maxMateria; i++)
		this->materias[i] = NULL;
	std::cout << "MateriaSource has been constructed" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &value)
{
	this->total = value.total;
	this->materias = new AMateria*[maxMateria];
	for (int i = 0; i < maxMateria; i++)
		this->materias[i] = value.materias[i]->clone();
	std::cout << "MateriaSource copy constructor" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < maxMateria; i++)
	{
		if (this->materias[i] != NULL)
			delete this->materias[i];
	}
	delete[] this->materias;
	std::cout << "MateriaSource has been destroyed!" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &value)
{
	if (this != &value)
	{
		for (int i = 0; i < maxMateria; i++)
		{
			if (this->materias[i] != NULL)
				delete this->materias[i];
		}
		this->total = value.total;
		for (int i = 0; i < maxMateria; i++)
			this->materias[i] = value.materias[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (total == maxMateria)
	{
		std::cout << "Max materia has been reached!" << std::endl;
		return ;
	}
	for (int i = 0; i < maxMateria; i++)
	{
		if (this->materias[i] == NULL)
			this->materias[i] = materia;
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < maxMateria; i++)
	{
		if (this->materias[i] != NULL && this->materias[i]->getType() == type)
			return this->materias[i]->clone();
	}
	return NULL;
}