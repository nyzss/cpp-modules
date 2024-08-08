/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:46:49 by okoca             #+#    #+#             */
/*   Updated: 2024/08/08 16:04:32 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	iter(T* arr, int length, void (*f)(T))
{
	for (int i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T>
void	iter(T* arr, int length, void (*f)(T&))
{
	for (int i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T>
void	iter(T* arr, int length, void (*f)(const T&))
{
	for (int i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T>
void	doElement(T el)
{
	std::cout << el << std::endl;
}

template <typename T>
void	increment(T el)
{
	el += 100;
	doElement<T>(el);
}
