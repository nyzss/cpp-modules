/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:28:02 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 20:28:02 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "iter.hpp"

int main()
{
	int len = 10;
	int	arr[len] = {8234, 324, 1223, 798};
	::iter(arr, len, increment<int>);

	std::cout << "---- ITER LOOP ------" << std::endl;

	len = 8;
	std::string	str[len] = {"wow", "haha", "lol", "incredible", "lmao", "wowzies", "world", "hello"};
	::iter(str, len, doElement<std::string>);
}