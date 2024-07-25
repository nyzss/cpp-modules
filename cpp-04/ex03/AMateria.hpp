/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:25:59 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 16:47:32 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class AMateria
{
private:
protected:
	std::string	type;
public:
	AMateria ();
	AMateria(std::string const & type);
	AMateria (const AMateria &value);
	~AMateria ();
	AMateria & operator=(const AMateria &value);

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;

	virtual void use(ICharacter& target);
};
