/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:22:17 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 16:36:37 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_HPP
# define INTERN_HPP

enum Found
{
	ROBOTOMY,
	PRESIDENT,
	SHRUBBERY,
	NONE
};

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
protected:
public:
	Intern ();
	Intern (const Intern &value);
	~Intern ();
	Intern & operator=(const Intern &value);
	AForm	*makeForm(std::string form, std::string target) const;
	class NotFoundException : public std::exception
	{
	public:
		const char * what() const throw()
		{
			return "Form has not been found!";
		}
	};
};

#endif /* INTERN_HPP */
