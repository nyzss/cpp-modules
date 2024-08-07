/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:26:29 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 19:26:29 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef A_HPP
# define A_HPP

#include "Base.hpp"

class A : public Base
{
private:
	A (const A &value);
	A & operator=(const A &value);
public:
	A ();
	~A ();
};

#endif /* A_HPP */
