/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:13:58 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 11:07:02 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
private:
	std::string	formName;
	bool		formSigned;
	const int	signRequired;
	const int	execRequired;
protected:
public:
	Form ();
	Form (std::string name, int signRequired, int execRequired);
	Form (const Form &value);
	~Form ();
	Form & operator=(const Form &value);
	class	GradeTooLowException;
	class	GradeTooHighException;
	std::string	getName() const;
	bool	getSigned()	const;
	int	getSignRequired()	const;
	int	getExecRequired()	const;
	void	beSigned(const Bureaucrat& value);
};

std::ostream	&operator<<(std::ostream& stream, const Form& value);

#endif /* FORM_HPP */
