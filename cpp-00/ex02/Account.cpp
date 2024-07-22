/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:39:22 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 08:56:27 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>

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
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->_amount)
		return (false);
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int	Account::checkAmount() const
{
	return (this->_amount);
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}

void	Account::_displayTimestamp()
{
	std::tm	time;
	std::get_time(&time, "%Y%m%d_%H%M%S");
	std::cout << std::put_time(&time, "%c");
}


// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << Account::getNbAccounts() << ";" << Account::getTotalAmount() << ";"
		<< Account::getNbDeposits() << ";" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus() const
{

}

Account::~Account()
{
}
