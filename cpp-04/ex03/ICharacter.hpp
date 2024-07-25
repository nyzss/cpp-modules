/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:42:14 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 16:51:06 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #include "AMateria.hpp"

#include <iostream>
#include <string>
class AMateria;

class ICharacter
{
	public:
	virtual ~ICharacter() {}

	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};
