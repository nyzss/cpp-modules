/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:30:22 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 16:48:06 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
private:
public:
	Ice ();
	Ice (const Ice &value);
	~Ice ();
	Ice & operator=(const Ice &value);

	AMateria* clone() const;
	void use(ICharacter& target);
};
