/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:02:52 by okoca             #+#    #+#             */
/*   Updated: 2024/08/10 14:02:52 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static int	isop(char c)
{
	char	ops[] = {'+', '-', '/', '*'};
	int		max_ops = 4;

	for (int i = 0; i < max_ops; i++)
	{
		if (ops[i] == c)
			return (1);
	}
	return (0);
}

void	RPN::validate(std::string raw)
{
	std::string::const_iterator	it;

	for (it = raw.begin(); it != raw.end(); it++)
	{
		if (*it == ' ' || *it == '\t')
			continue;
		if (!isop(*it) && !isdigit(*it))
			throw RPN::InvalidArgument();
	}
}

void	RPN::calculate(std::string raw)
{
	RPN::validate(raw);
	std::cout << raw << std::endl;
}
