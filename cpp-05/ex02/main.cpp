/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:04:54 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 14:59:25 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <ctime>

int	main()
{
	std::srand(time(NULL));
	{
		try
		{
			Bureaucrat	mike("Mike", 10);

			ShrubberyCreationForm	form;
			// form.execute(mike;
			form.beSigned(mike);

			form.execute(mike);
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

			RobotomyRequestForm	newForm;
			// form.execute(mike;
			newForm.beSigned(max);

			newForm.execute(max);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}