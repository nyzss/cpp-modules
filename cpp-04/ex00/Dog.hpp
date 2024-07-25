/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:59:43 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 11:01:48 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Dog : public Animal
{
private:
public:
	Dog ();
	Dog (const Dog &value);
	~Dog ();
	Dog & operator=(const Dog &value);
	void	makeSound() const;
};

#endif /* DOG_HPP */
