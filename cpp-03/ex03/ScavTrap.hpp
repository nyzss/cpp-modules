/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:43:21 by okoca             #+#    #+#             */
/*   Updated: 2024/07/24 22:33:18 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
public:
	ScavTrap ();
	ScavTrap (std::string name);
	ScavTrap (const ScavTrap &value);
	~ScavTrap ();
	ScavTrap & operator=(const ScavTrap &value);

	void guardGate();
	void attack(const std::string &target);
};

#endif /* SCAVTRAP_HPP */
