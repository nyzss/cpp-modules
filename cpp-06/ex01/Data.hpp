/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:18:43 by okoca             #+#    #+#             */
/*   Updated: 2024/08/07 16:18:43 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <iostream>

class Data
{
private:
	std::string name;
	int			age;
	Data ();
	Data (const Data &value);
public:
	Data (std::string name, int age);
	~Data ();
	Data & operator=(const Data &value);
	const std::string &getName() const;
	int getAge() const;
	void	setName(std::string name);
	void	setAge(int age);
};

std::ostream	&operator<<(std::ostream &stream, const Data &data);

#endif /* DATA_HPP */
