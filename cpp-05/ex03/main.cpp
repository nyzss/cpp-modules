/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:04:54 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 16:49:04 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <ctime>

int	main()
{
	std::srand(time(NULL));
	{
		try
		{
			Bureaucrat	mo("mo", 10);
			Intern	intern;

			AForm *form	= intern.makeForm("shrubberry creation", "my home");

			mo.signForm(*form);
			mo.executeForm(*form);
			AForm *invalid	= intern.makeForm("haha form", "lol");
			mo.signForm(*invalid);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}