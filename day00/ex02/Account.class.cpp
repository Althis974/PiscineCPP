/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Account.class.cpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/28 15:49:15 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/28 15:49:15 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "Account.class.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit),
										_nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
			  << ";created" << std::endl;
}

Account::~Account()
{
	_nbAccounts--;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
			  << ";closed" << std::endl;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts()
{
	return Account::_nbAccounts;
}

int		Account::getTotalAmount()
{
	return Account::_totalAmount;
}
int		Account::getNbDeposits()
{
	return Account::_totalNbDeposits;
}
int		Account::getNbWithdrawals()
{
	return Account::_totalNbWithdrawals;
}
void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits
			  << ";withdrawals:"<< _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount << ";deposit:" << deposit;

	this->_amount += deposit;
	this->_nbDeposits++;

	std::cout << ";amount:" << this->_amount
			  << ";nb_deposits:" << this->_nbDeposits << std::endl;

	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount << ";withdrawal:";

	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return false;
	}

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	std::cout << withdrawal << ";amount:" << this->_amount
			  << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	return true;
}

int		Account::checkAmount() const
{
	return this->_amount;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	time_t t = time(nullptr);
	tm* timePtr = localtime(&t);

	std::cout << "["
			  << timePtr->tm_year + 1900
			  << std::setw(2) << std::right << std::setfill('0')
			  << timePtr->tm_mon + 1
			  << std::setw(2) << std::right << std::setfill('0')
			  << timePtr->tm_mday << "_"
			  << std::setw(2) << std::right << std::setfill('0')
			  << timePtr->tm_hour
			  << std::setw(2) << std::right << std::setfill('0')
			  << timePtr->tm_min
			  << std::setw(2) << std::right << std::setfill('0')
			  << timePtr->tm_sec << "] ";
}

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// My boss is a dick                                                          //
// ************************************************************************** //