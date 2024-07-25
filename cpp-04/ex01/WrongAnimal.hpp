/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:59:43 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 11:19:09 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
private:
protected:
	std::string type;
public:
	WrongAnimal ();
	WrongAnimal (std::string type);
	WrongAnimal (const WrongAnimal &value);
	~WrongAnimal ();
	WrongAnimal & operator=(const WrongAnimal &value);
	void	makeSound() const;
	const std::string &	getType() const;
};

#endif /* WRONGANIMAL_HPP */
