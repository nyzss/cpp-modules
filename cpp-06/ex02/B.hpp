/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:26:29 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 19:26:29 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

class B : public Base
{
private:
public:
	B ();
	B (const B &value);
	B & operator=(const B &value);
	~B ();
};

#endif /* B_HPP */
