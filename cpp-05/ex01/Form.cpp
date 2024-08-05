/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:14:10 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 11:06:26 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.cpp"

Form::Form() : execRequired(100), signRequired(50), formName("Some form"), formSigned(false)
{
}

Form::Form(const Form &value) : execRequired(value.execRequired), signRequired(value.signRequired)
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
		// Copy data members from value to this object
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
		value.signForm(*this, this->formSigned);
		throw Form::GradeTooLowException();
	}
	else
	{
		this->formSigned = true;
		value.signForm(*this, this->formSigned);
	}
}

std::ostream	&operator<<(std::ostream& stream, const Form& value)
{
	const char *signed_str = value.getSigned() ? "signed" : "not signed";

	stream << value.getName() << " form is " << signed_str << ", it requires grade ";
	stream << value.getSignRequired() << " to be signed, and grade ";
	stream << value.getExecRequired() << " to be executed.";
	return stream;
}