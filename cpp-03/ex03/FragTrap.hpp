/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:43:21 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 22:30:29 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
	FragTrap ();
	FragTrap (std::string name);
	FragTrap (const FragTrap &value);
	~FragTrap ();
	FragTrap & operator=(const FragTrap &value);

	void highFivesGuys(void);
};

#endif /* SCAVTRAP_HPP */
