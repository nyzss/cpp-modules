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

std::stack<int>	RPN::s;
RPN::rpn_op		RPN::op;
int				RPN::var1;
int				RPN::var2;
bool			RPN::next;

static bool	isop(char c)
{
	char	ops[] = {'+', '-', '/', '*'};
	int		max_ops = 4;

	for (int i = 0; i < max_ops; i++)
	{
		if (ops[i] == c)
			return (true);
	}
	return (false);
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

RPN::rpn_op	RPN::get_type(const std::string &tok)
{
	if (tok.length() == 1)
	{
		char c = tok[0];
		switch (c)
		{
		case PLUS:
			return PLUS;
		case MINUS:
			return MINUS;
		case MUL:
			return MUL;
		case DIV:
			return DIV;
		default:
			break ;
		}
	}
	return NUMBER;
}

std::string	RPN::find_next(const std::string &raw)
{
	static size_t	last;
	size_t	pos = raw.find(' ', last);
	std::string token = raw.substr(last, pos - last);
	if (pos == std::string::npos)
	{
		next = false;
		return token;
	}
	last = pos + 1;
	next = true;
	return token;
}

void	RPN::calculate(std::string raw)
{
	RPN::validate(raw);
	next = true;
	while (next)
	{
		std::string	tok = find_next(raw);
		std::cout << "TOK: " << tok << std::endl;
		if (!next)
			break ;
	}
}
