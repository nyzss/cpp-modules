/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:13:58 by okoca             #+#    #+#             */
/*   Updated: 2024/08/06 08:26:39 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class AForm
{
private:
	std::string	formName;
	bool		formSigned;
	const int	signRequired;
	const int	execRequired;
	std::string	target;
public:
	AForm ();
	AForm (std::string name, int signRequired, int execRequired);
	AForm (const AForm &value);
	~AForm ();
	AForm & operator=(const AForm &value);
	class GradeTooLowException : public std::exception
	{
	public:
		const char*	what() const throw() { return "[FORM][LOW] Grade too low!!!!"; }
	};
	class GradeTooHighException : public std::exception
	{
	public:
		const char*	what() const throw() { return "[FORM][HIGH] Grade too high!!!!"; }
	};
	class	FormNotSignedException : public std::exception
	{
	public:
		const char*	what() const throw() { return "[FORM][EXECUTE] Form not signed, cannot execute!!!!"; }
	};
	std::string	getName() const;
	std::string	getTarget() const;
	bool	getSigned()	const;
	int	getSignRequired()	const;
	int	getExecRequired()	const;
	void	setName(std::string name);
	void	setTarget(std::string target);
	void	beSigned(const Bureaucrat& value);
	bool	checkRequirement(const Bureaucrat &value) const;
	virtual void	execute(const Bureaucrat & executor) const = 0;
};

std::ostream	&operator<<(std::ostream& stream, const AForm& value);

#endif /* FORM_HPP */
