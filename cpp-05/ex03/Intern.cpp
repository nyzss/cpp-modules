/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:22:06 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 16:36:49 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &value)
{
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
	int	found;
	for (int i = 0; i < form.length(); i++)
		form[i] = ::tolower(form[i]);
	std::string	levels[3] = {"robotomy request", "presidential pardon", "shrubberry creation"};
	for (int i = 0; i < 3; i++)
	{
		if (levels[i] == form)
			found = i;
	}
	switch	(found)
	{
		case ROBOTOMY:
			return (new RobotomyRequestForm(target));
		case SHRUBBERY:
			return (new ShrubberyCreationForm(target));
		case PRESIDENT:
			return (new PresidentialPardonForm(target));
		default:
			throw Intern::NotFoundException();
	}
}
