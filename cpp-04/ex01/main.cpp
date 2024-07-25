/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:12:09 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 14:52:47 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

const int	numberAnimal = 100;

int main()
{

	Animal **list = new Animal*[numberAnimal];

	for (int i = 0; i < numberAnimal; i++)
	{
		if (i < numberAnimal / 2)
		{
			list[i] = new Dog();
			continue;
		}
		list[i] = new Cat();
	}

	for (int i = 0; i < numberAnimal; i++)
		list[i]->makeSound();

	for (int i = 0; i < numberAnimal; i++)
		delete list[i];

	delete[] list;
	return 0;
}