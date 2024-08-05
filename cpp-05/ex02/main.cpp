/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:04:54 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 15:43:57 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <ctime>

int	main()
{
	std::srand(time(NULL));
	{
		try
		{
			Bureaucrat	mike("Mike", 10);

			ShrubberyCreationForm	form;
			mike.executeForm(form);
			mike.signForm(form);

			mike.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat	max("Max", 10);

			RobotomyRequestForm	form;
			max.signForm(form);

			max.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat	mo("Mo", 10);

			PresidentialPardonForm form;
			mo.signForm(form);

			mo.executeForm(form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}