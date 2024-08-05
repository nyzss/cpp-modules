/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 08:03:42 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 09:16:02by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
private:
	std::string	name;
	int			grade;
protected:
public:
	Bureaucrat ();
	Bureaucrat (const Bureaucrat &value);
	Bureaucrat (std::string name, int grade);
	~Bureaucrat ();
	Bureaucrat & operator=(const Bureaucrat &value);
	std::string getName() const;
	int		getGrade() const;
	void	setName(std::string value);
	void	incrementGrade();
	void	decrementGrade();
	class GradeTooHighException;
	class GradeTooLowException;

};

std::ostream &operator<<(std::ostream& stream, const Bureaucrat& value);

#endif /* BUREAUCRAT_HPP */
