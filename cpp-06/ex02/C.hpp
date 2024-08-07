/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:26:29 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 19:26:29 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

class C : public Base
{
private:
	C (const C &value);
	C & operator=(const C &value);
public:
	C ();
	~C ();
};

#endif /* C_HPP */
