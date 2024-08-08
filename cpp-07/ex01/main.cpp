/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:28:02 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 14:31:55 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "iter.hpp"

# define MAX_LEN 10

int main()
{
	const int len = MAX_LEN;
	int	arr[len] = {8234, 324, 1223, 798};
	::iter(arr, len, increment<int>);

	std::cout << "---- ITER LOOP ------" << std::endl;

	std::string	str[len] = {"wow", "haha", "lol", "incredible", "lmao", "wowzies", "world", "hello", "oooo", "huhuu"};
	::iter(str, len, doElement<std::string>);
}