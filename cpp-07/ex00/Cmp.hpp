/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cmp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:28:43 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 20:28:43 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	swap(T &a, T &b)
{
	T  tmp = a;

	a = b;
	b = tmp;
}

template <typename T>
T	min(const T& a, const T& b)
{
	return b <= a ? b : a;
}

template <typename T>
T	max(const T& a, const T& b)
{
	return b >= a ? b : a;
}