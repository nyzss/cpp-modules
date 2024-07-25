/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:12:09 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 11:39:45 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();


	std::cout << "Animal: " << meta->getType() << " " << std::endl;
	std::cout << "Animal: " << j->getType() << " " << std::endl;
	std::cout << "Animal: " << i->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	std::cout << "Animal: " << wrongMeta->getType() << " " << std::endl;
	std::cout << "Animal: " << wrongCat->getType() << " " << std::endl;

	wrongMeta->makeSound();
	wrongCat->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wrongMeta;
	delete wrongCat;
	return 0;
}