/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:44:29 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 15:55:04 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria	**materias;
	std::string	name;
	int	total;
public:
	Character ();
	Character(const std::string & name);
	Character (const Character &value);
	~Character ();
	Character & operator=(const Character &value);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif /* CHARACTER_HPP */