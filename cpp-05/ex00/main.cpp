/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:04:54 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 09:35:12 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat	mike("Mike", 151);
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

			mo.decrementGrade(); // 3
			mo.incrementGrade(); // 2
			mo.incrementGrade(); // 1
			mo.incrementGrade(); // 0
			std::cout << "This should NEVER show!" << std::endl;
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

			max.incrementGrade();
			max.decrementGrade(); // 148
			max.decrementGrade(); // 149
			max.decrementGrade(); // 150
			max.decrementGrade(); // 151 !!
			std::cout << "this shouldn't show up!!" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Max: " << e.what() << std::endl;
		}
	}

}