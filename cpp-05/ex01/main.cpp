/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:04:54 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 11:06:48 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat	mike("Mike", 10);
			Form		mikeForm("Mike Form", 11, 10);

			mikeForm.beSigned(mike);
			mike.decrementGrade();
			mike.decrementGrade();
			mikeForm.beSigned(mike);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Mike: " << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat	mo("Mo", 2);
			Form		moForm("Mo Form", 1, 10);

			moForm.beSigned(mo);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		try
		{
			Bureaucrat	max("Max", 148);
			Form		maxForm("Max Form", 151, 10);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Max: " << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat	Mi("Mi", 148);
			Form		maxForm("Mi Form", 0, 10);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Max: " << e.what() << std::endl;
		}
	}
}