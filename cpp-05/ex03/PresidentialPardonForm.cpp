/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:29:29 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 14:45:59 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &value) : AForm(value.getName(), 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &value)
{
	if (this != &value)
	{
		this->setName(value.getName());
	}
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	this->checkRequirement(executor);

	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
