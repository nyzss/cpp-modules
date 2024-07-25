/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:30:22 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 16:07:40 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

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

#endif /* ICE_HPP */