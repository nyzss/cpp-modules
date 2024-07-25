/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:28:40 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 13:45:04 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

# define MAX_IDEAS 100

class Brain
{
private:
	std::string	*ideas;
public:
	Brain ();
	Brain (const Brain &value);
	~Brain ();
	Brain & operator=(const Brain &value);
};

#endif /* BRAIN_HPP */