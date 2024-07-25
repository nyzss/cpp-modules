/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:59:43 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 11:01:48 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Cat : public Animal
{
private:
public:
	Cat ();
	Cat (const Cat &value);
	~Cat ();
	Cat & operator=(const Cat &value);
	void	makeSound() const;
};

#endif /* CAT_HPP */
