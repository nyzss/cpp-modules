/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:29:14 by okoca             #+#    #+#             */
/*   Updated: 2024/08/05 14:57:56 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
protected:
public:
	PresidentialPardonForm ();
	PresidentialPardonForm (const PresidentialPardonForm &value);
	~PresidentialPardonForm ();
	PresidentialPardonForm & operator=(const PresidentialPardonForm &value);
	void	execute(const Bureaucrat & executor) const;
};

#endif /* PRESIDENTIALPARDONFORM_HPP */
