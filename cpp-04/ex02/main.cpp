/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:12:09 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 15:21:22 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *tmp = new Cat;
	Animal *lol = new Cat;

	*lol = *tmp;

	tmp->makeSound();
	tmp->showIdeas(1);
	delete tmp;

	lol->makeSound();
	lol->showIdeas(101);
	delete lol;

	return 0;
}