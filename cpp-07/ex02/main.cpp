/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:35:52 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 21:35:52 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int>	arr(25);


	Array<int>	wow(50);
	for (size_t i = 0; i < wow.size(); i++)
		wow[i] = i + 55;

	for (size_t i = 0; i < arr.size(); i++)
		arr[i] = i * 100;
	Array<int> newArr(arr);

	std::cout << arr << std::endl;

	std::cout << "second array: " << std::endl;

	std::cout << newArr << std::endl;
	std::cout << "\n" << "Array[10]: " << newArr[10] << std::endl;

	std::cout << "third array: " << std::endl;
	arr = wow;
	std::cout << arr << std::endl;

	try
	{
		std::cout << "Array[26]: " << newArr[26] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<std::string> str(50);

	for (size_t i = 0; i < str.size(); i++)
		str[i] = "wow";

	std::cout << "STRING ARRAY" << std::endl;

	std::cout << "LENGTH: " << str.size() << std::endl;
	std::cout << str << std::endl;
}