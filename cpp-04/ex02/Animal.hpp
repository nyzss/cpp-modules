/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:59:43 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 15:18:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

typedef	unsigned long uint32_t;

#include "Brain.hpp"

class Animal
{
private:
protected:
	std::string type;
public:
	Animal ();
	Animal (std::string type);
	Animal (const Animal &value);
	virtual ~Animal ();
	Animal & operator=(const Animal &value);
	virtual void	makeSound() const = 0;
	virtual void	showIdeas(uint32_t n) const = 0;
	const std::string &	getType() const;
};

#endif /* ANIMAL_HPP */
