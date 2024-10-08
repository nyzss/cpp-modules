/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:41:33 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 17:27:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	AMateria	*cureTmp = new Cure();
	src->learnMateria(cureTmp);

	ICharacter* me = new Character("me");
	ICharacter* other = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	AMateria *newOne = src->createMateria("cure");
	AMateria *anotherTmp = new Cure();

	me->equip(tmp);
	other->equip(newOne);
	other->equip(anotherTmp);

	tmp = src->createMateria("cure");

	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	other->use(0, *me);
	other->use(1, *me);
	other->use(3, *me);
	other->unequip(1);


	delete bob;
	delete me;
	delete other;
	delete src;
	delete cureTmp;
	delete anotherTmp;
	return 0;
}
