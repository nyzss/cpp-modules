/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:14:10 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 15:03:05 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : signRequired(50), execRequired(100)
{
	this->formName = "Some form";
	this->formSigned = false;
}

Form::Form(const Form &value) : signRequired(value.signRequired), execRequired(value.execRequired)
{
	this->formSigned = value.formSigned;
	this->formName = value.formName;
}

Form::~Form()
{
}

Form & Form::operator=(const Form &value)
{
	if (this != &value)
	{
		this->formName = value.formName;
		this->formSigned = value.formSigned;
	}
	return *this;
}

class Form::GradeTooHighException : public std::exception
{
public:
	const char*	what() const throw()
	{
		return "[FORM][HIGH] Grade too high!!!!";
	}
};

class Form::GradeTooLowException : public std::exception
{
public:
	const char*	what() const throw()
	{
		return "[FORM][LOW] Grade too low!!!!";
	}
};

std::string	Form::getName() const
{
	return this->formName;
}

bool	Form::getSigned()	const
{
	return this->formSigned;
}

int	Form::getSignRequired()	const
{
	return this->signRequired;
}

int	Form::getExecRequired()	const
{
	return this->execRequired;
}

int	validate(int val)
{
	if (val > 150)
		throw Form::GradeTooLowException();
	if (val < 1)
		throw Form::GradeTooHighException();
	return val;
}

Form::Form (std::string name, int signRequired, int execRequired) : signRequired(validate(signRequired)), execRequired(validate(execRequired))
{
	this->formName = name;
	this->formSigned = false;
}

void	Form::beSigned(const Bureaucrat& value)
{
	if (this->signRequired < value.getGrade())
	{
		this->formSigned = false;
		throw Form::GradeTooLowException();
	}
	else
		this->formSigned = true;
}

std::ostream	&operator<<(std::ostream& stream, const Form& value)
{
	const char *signed_str = value.getSigned() ? "signed" : "not signed";

	stream << value.getName() << " form is " << signed_str << ", it requires grade ";
	stream << value.getSignRequired() << " to be signed, and grade ";
	stream << value.getExecRequired() << " to be executed.";
	return stream;
}