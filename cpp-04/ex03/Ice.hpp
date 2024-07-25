/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:30:22 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 15:34:13 by okoca            ###   ########.fr       */
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
};

#endif /* ICE_HPP */