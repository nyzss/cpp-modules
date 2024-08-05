/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:29:29 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 14:45:59 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &value) : AForm(value.getName(), 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &value)
{
	if (this != &value)
	{
		this->setName(value.getName());
	}
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	this->checkRequirement(executor);

	std::cout << "Some drilling noise..." << std::endl;
	const char	*robotomy = std::rand() % 2 == 0 ? "been robotomized" : "not been robotomized";
	std::cout << executor.getName() << " has " << robotomy << std::endl;
}
