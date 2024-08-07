/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:19:38 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 19:19:38 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Base
{
private:
	Base (const Base &value);
	Base & operator=(const Base &value);
public:
	Base ();
	virtual ~Base () = 0;
	static Base * generate(void);
	static void identify(Base* p);
	static void identify(Base& p);
};

#endif /* BASE_HPP */
