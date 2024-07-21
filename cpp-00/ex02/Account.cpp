/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:39:22 by okoca             #+#    #+#             */
/*   Updated: 2024/07/21 22:05:51 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::getNbAccounts()
{
	return	(_nbAccounts);
}

int	Account::getTotalAmount()
{
	return	(_totalAmount);
}

int	Account::getNbDeposits()
{
	return	(_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return	_totalNbWithdrawals;
}

void	Account::makeDeposit(int deposit)
{
	this->_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->_totalAmount)
		return (false);
	this->_totalAmount -= withdrawal;
	return (true);
}

int	Account::checkAmount() const
{
	return (_totalAmount);
}

Account::Account(int initial_deposit)
{
	this->makeDeposit(initial_deposit);
}

Account::~Account()
{
}
