/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:14:10 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 14:16:29 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : signRequired(50), execRequired(100)
{
	this->formName = "Some form";
	this->formSigned = false;
}

AForm::AForm(const AForm &value) : signRequired(value.signRequired), execRequired(value.execRequired)
{
	this->formSigned = value.formSigned;
	this->formName = value.formName;
}

AForm::~AForm()
{
}

AForm & AForm::operator=(const AForm &value)
{
	if (this != &value)
	{
		this->formName = value.formName;
		this->formSigned = value.formSigned;
	}
	return *this;
}

std::string	AForm::getName() const
{
	return this->formName;
}

bool	AForm::getSigned()	const
{
	return this->formSigned;
}

int	AForm::getSignRequired()	const
{
	return this->signRequired;
}

int	AForm::getExecRequired()	const
{
	return this->execRequired;
}

int	validate(int val)
{
	if (val > 150)
		throw AForm::GradeTooLowException();
	if (val < 1)
		throw AForm::GradeTooHighException();
	return val;
}

AForm::AForm (std::string name, int signRequired, int execRequired) : signRequired(validate(signRequired)), execRequired(validate(execRequired))
{
	this->formName = name;
	this->formSigned = false;
}

void	AForm::beSigned(const Bureaucrat& value)
{
	if (this->signRequired < value.getGrade())
	{
		this->formSigned = false;
		value.signForm(*this, this->formSigned);
		throw AForm::GradeTooLowException();
	}
	else
	{
		this->formSigned = true;
		value.signForm(*this, this->formSigned);
	}
}

void	AForm::setName(std::string	name)
{
	this->formName = name;
}

bool	AForm::checkRequirement(const Bureaucrat &value) const
{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (value.getGrade() > this->getExecRequired())
		throw AForm::GradeTooLowException();
	return true;
}

std::ostream	&operator<<(std::ostream& stream, const AForm& value)
{
	const char *signed_str = value.getSigned() ? "signed" : "not signed";

	stream << value.getName() << " form is " << signed_str << ", it requires grade ";
	stream << value.getSignRequired() << " to be signed, and grade ";
	stream << value.getExecRequired() << " to be executed.";
	return stream;
}