/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:29:14 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 14:58:32 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
protected:
public:
	ShrubberyCreationForm ();
	ShrubberyCreationForm (const ShrubberyCreationForm &value);
	~ShrubberyCreationForm ();
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm &value);
	void	execute(const Bureaucrat & executor) const;
};

#endif /* SHRUBBERYCREATIONFORM_HPP */
