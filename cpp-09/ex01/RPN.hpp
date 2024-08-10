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

class RPN
{
private:
	enum	rpn_op
	{
		NONE = 0,
		NUMBER = 1,
		PLUS = '+',
		MINUS = '-',
		MUL = '*',
		DIV = '/',
	};
	static std::stack<int> s;
	static rpn_op			op;
	static int				var1;
	static int				var2;
	static int				res;
	static bool				next;
	RPN () {};
	RPN (const RPN &value) { (void)value; };
	RPN & operator=(const RPN &value) { (void)value; return *this; };
	static void validate(std::string raw);
	static std::string	find_next(const std::string &raw);
	static rpn_op	get_type(const std::string &tok);
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
