/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:13:58 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 13:51:20 by okoca            ###   ########.fr       */
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
protected:
public:
	AForm ();
	AForm (std::string name, int signRequired, int execRequired);
	AForm (const AForm &value);
	~AForm ();
	AForm & operator=(const AForm &value);
	class	GradeTooLowException;
	class	GradeTooHighException;
	std::string	getName() const;
	bool	getSigned()	const;
	int	getSignRequired()	const;
	int	getExecRequired()	const;
	void	setName(std::string name);
	void	beSigned(const Bureaucrat& value);
	virtual void	execute(const Bureaucrat & executor) = 0;
};

std::ostream	&operator<<(std::ostream& stream, const AForm& value);

#endif /* FORM_HPP */
