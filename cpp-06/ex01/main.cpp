/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:12:12 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 16:12:12 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data("Mo", 71237);

	std::cout << &data << ": " << data << std::endl;

	uintptr_t val = Serializer::serialize(&data);

	Data *cpy = Serializer::deserialize(val);

	std::cout << cpy << ": " << *cpy << std::endl;
}