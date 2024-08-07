/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:17:53 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 17:12:34 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	**materias;
	int	total;
	static const int	maxMateria = 4;
public:
	MateriaSource ();
	MateriaSource (const MateriaSource &value);
	~MateriaSource ();
	MateriaSource & operator=(const MateriaSource &value);

	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
};

#endif /* MATERIASOURCE_HPP */