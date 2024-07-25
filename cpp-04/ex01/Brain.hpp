/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:28:40 by okoca             #+#    #+#             */
/*   Updated: 2024/07/25 14:35:33 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

typedef	unsigned long uint32_t;

class Brain
{
private:
	std::string	*ideas;
	uint32_t maxIdeas;
public:
	Brain ();
	Brain (const Brain &value);
	Brain(uint32_t maxIdeas);
	~Brain ();
	Brain & operator=(const Brain &value);
	const std::string getIdea(uint32_t n) const;
	void	showIdeas() const;
};

#endif /* BRAIN_HPP */