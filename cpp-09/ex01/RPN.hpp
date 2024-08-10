/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:02:42 by okoca             #+#    #+#             */
/*   Updated: 2024/08/10 14:02:42 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>

# define MAX_OPS 4

enum	rpn_op
{
	NONE = 0,
	PLUS = '+',
	MINUS = '-',
	MUL = '*',
	DIV = '/',
};

class RPN
{
private:
	std::stack<int> s;
	rpn_op			op;
	int				var1;
	int				var2;
	RPN () : op(NONE), var1(0), var2(0) {};
	RPN (const RPN &value) { (void)value; };
	RPN & operator=(const RPN &value) { (void)value; return *this; };
	static void validate(std::string raw);
public:
	~RPN () {};
	static void calculate(std::string raw);
	class InvalidArgument : public std::exception
	{
		const char *what() const throw()
		{
			return "Invalid argument, please provide a valid RPN value.";
		}
	};
};

#endif /* RPN_HPP */
