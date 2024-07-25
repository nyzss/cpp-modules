/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:30:22 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 15:34:13 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
	Cure ();
	Cure (const Cure &value);
	~Cure ();
	Cure & operator=(const Cure &value);

	AMateria* clone() const;
};

#endif /* CURE_HPP */