/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:26:19 by eblondee          #+#    #+#             */
/*   Updated: 2022/11/14 11:11:19 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	s_time = time(0);
	char	str_time[19];

	strftime(str_time, 19, "[%Y%m%d_%H%M%S] ", localtime(&s_time));
	std::cout << str_time;
}

Account::Account( void )
{

}

Account::Account( int initial_deposit )
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit;
	std::cout << ";created\n";
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits += 1;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_nbWithdrawals += 1;
		_amount -= withdrawal;	
		_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount"<< _amount;
		std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}

int	Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";deposit:" << _nbDeposits << ";withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
}
