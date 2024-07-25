/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:44:29 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 15:46:47 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
public:
	Character ();
	Character (const Character &value);
	~Character ();
	Character & operator=(const Character &value);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif /* CHARACTER_HPP */