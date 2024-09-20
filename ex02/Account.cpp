/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:54:47 by susajid           #+#    #+#             */
/*   Updated: 2024/09/20 11:46:24 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Code understanding: https://chatgpt.com/share/66ec6ef4-25f8-8005-a29b-ecf3f99ac081

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;

	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;

	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";created" << std::endl;
}

// TODO
Account::~Account( void )
{
}

// TODO
void	Account::makeDeposit( int deposit )
{
	(void)deposit;
}

// TODO
bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	return (false);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	current_time = std::time(nullptr);
	std::tm*	time_info = std::localtime(&current_time);
	char		buffer[18];

	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", time_info);
	std::cout << buffer;
}

// TODO
Account::Account( void )
{
}
