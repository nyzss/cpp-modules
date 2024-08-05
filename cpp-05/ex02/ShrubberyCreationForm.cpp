/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:29:29 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 14:45:59 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shruberry Creation Form", 145, 137)
{
	this->target = "Some target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shruberry Creation Form", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &value) : AForm(value.getName(), 145, 137)
{
	this->target = value.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &value)
{
	if (this != &value)
	{
		this->setName(value.getName());
		this->target = value.target;
	}
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	this->checkRequirement(executor);
	std::string	fileName = target;
	fileName = fileName.append("_shrubbery");
	std::ifstream ascii("tree.ascii");
	if (!ascii)
		throw std::runtime_error("Couldn't find tree ascii.");
	std::ofstream file(fileName.c_str());
	if (!file)
	{
		ascii.close();
		throw std::runtime_error("Failed file creation, exiting...");
	}
	std::string line;
	while (getline(ascii, line))
		file << line << "\n";
}