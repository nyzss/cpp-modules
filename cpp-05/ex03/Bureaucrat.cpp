/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 08:05:19 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 15:51:49 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Some bureaucrat"), grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &value) : grade(value.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &value)
{
	if (this != &value)
	{
		this->grade = value.grade;
	}
	return *this;
}

class Bureaucrat::GradeTooHighException : public std::exception
{
public:
	const char*	what() const throw()
	{
		return "[BUREAUCRAT][HIGH] Grade too high!!!!";
	}
};

class Bureaucrat::GradeTooLowException : public std::exception
{
public:
	const char*	what() const throw()
	{
		return "[BUREAUCRAT][LOW] Grade too low!!!!";
	}
};

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = grade;
}

void	Bureaucrat::setName(std::string name)
{
	this->name = name;
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::incrementGrade()
{
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
	std::cout << this->name << " has leveled up in the lovely corporate ladder! Now at " << this->grade << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
	std::cout << this->name << " fell off.. Now at " << this->grade << std::endl;
}

void	Bureaucrat::signForm(AForm &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " has signed form " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't sign form " << form.getName() << " because the bureaucrat grade is too low!" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't execute " << form.getName() << std::endl;
	}
}

std::ostream &operator<<(std::ostream& stream, const Bureaucrat& value)
{
	stream << value.getName() << ", bureaucrat grade " << value.getGrade();
	return (stream);
}
