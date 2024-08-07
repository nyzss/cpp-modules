/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:29:14 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 16:12:14 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

#include <cstdlib>

class RobotomyRequestForm : public AForm
{
private:
protected:
public:
	RobotomyRequestForm ();
	RobotomyRequestForm (std::string target);
	RobotomyRequestForm (const RobotomyRequestForm &value);
	~RobotomyRequestForm ();
	RobotomyRequestForm & operator=(const RobotomyRequestForm &value);
	void	execute(const Bureaucrat & executor) const;
};

#endif /* ROBOTOMYREQUESTFORM_HPP */
