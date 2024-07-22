/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <okoca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:39:22 by okoca             #+#    #+#             */
/*   Updated: 2024/07/22 10:42:28 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->checkAmount() << ";" << "deposit:" << deposit << ";" << "amount:" << this->checkAmount() + deposit << ";" << "nb_deposits" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

// [19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
// [19920104_091532] index:0;p_amount:47;withdrawal:refused
bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->_amount)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->checkAmount() << ";" << "withdrawal:" << "refused" << std::endl;
	}
		return (false);
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->checkAmount() << ";" << "withdrawal:" << withdrawal << ";" << "amount:" << this->checkAmount() - withdrawal << ";" << "nb_withdrawals" << this->_nbWithdrawals << std::endl;
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

// [19920104_091532] index:4;amount:1234;created
Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->checkAmount() << ";" << "created" << std::endl;
}

void	Account::_displayTimestamp()
{
	time_t	now = time(0);
	struct tm *time = std::localtime(&now);
	// std::string time = ctime(&now);
	std::cout << "[" << time->tm_year + 1900 << (time->tm_mon + 1 < 10 ? "0" : "") << time->tm_mon << time->tm_mday << "_" << time->tm_hour << time->tm_min << time->tm_sec << "] ";
}


// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";" << "total:" << Account::getTotalAmount() << ";"
		<< "deposits:" << Account::getNbDeposits() << ";" << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

// [19920104_091532] index:1;amount:785;deposits:1;withdrawals:1
void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->checkAmount() << ";" << "deposits:" << this->_nbDeposits << ";" << "withdrawals" << this->_nbWithdrawals << std::endl;
}

// [19920104_091532] index:2;amount:864;closed
Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->checkAmount() << ";" << "closed" << std::endl;
}
