/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:22:06 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 16:47:55 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &value)
{
	(void)value;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(const Intern &value)
{
	if (this != &value)
	{
	}
	return *this;
}

AForm*	Intern::makeForm(std::string form, std::string target) const
{
	AForm	*newForm;
	int	found = -1;
	for (size_t i = 0; i < form.length(); i++)
		form[i] = ::tolower(form[i]);
	std::string	levels[] = {"robotomy request", "presidential pardon", "shrubberry creation"};
	for (int i = 0; i < 3; i++)
	{
		if (levels[i] == form)
			found = i;
	}
	switch	(found)
	{
		case ROBOTOMY:
			newForm =  new RobotomyRequestForm(target);
			break ;
		case PRESIDENT:
			newForm = new PresidentialPardonForm(target);
			break ;
		case SHRUBBERY:
			newForm = new ShrubberyCreationForm(target);
			break ;
		default:
			throw Intern::NotFoundException();
	}
	std::cout << "Intern creates " << newForm->getName() << " with target " << newForm->getTarget() << std::endl;
	return newForm;
}
