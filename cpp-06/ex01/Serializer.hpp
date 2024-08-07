/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:10:23 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 16:10:23 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>

#include "Data.hpp"

class Serializer
{
private:
	Serializer () {};
	Serializer (const Serializer &value) { (void)value; };
	Serializer & operator=(const Serializer &value) { (void)value; return *this; };
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
	virtual ~Serializer () = 0;
};

#endif /* SERIALIZER_HPP */
