/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:44:50 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/15 18:44:24 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

Account::Account(int initial_deposit)
{
	if (!_nbAccounts)
	{
		_nbAccounts = 0;
		_totalNbDeposits = 0;
		_totalNbWithdrawals = 0;
		_totalAmount = 0;
	}
	_accountIndex = _nbAccounts + 1;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount+= _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";closed" << std::endl;
}

static int	Account::getNbAccounts(void)
{
	return ( _nbAccounts );
}

static int	Account::getTotalAmount( void )
{
	return ( _totalAmount );
}

static int	Account::getNbDeposits( void )
{
	return ( _nbDeposits );
}

static int	Account::getNbWithdrawals( void )
{
	return ( _nbWithdrawals );
}

static void	Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << _nbAccounts << ";total:";
	std::cout << _totalAmount << ";deposits" << _totalNbDeposits << ";withdrawals:";
	std::cout << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "index:" << _accountIndex << ";p_amount:";
	std::cout << _amount << ";deposit:";

	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;

	std::cout << deposit << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "index:" << _accountIndex << ";p_amount:";
	std::cout << _amount << ";withdrawal:";

	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;

	std::cout << withdrawal << ";amount:" << _amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	
}

void	Account::displayStatus(void) const
{
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";deposits" << _nbDeposits << ";withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
}

static void	Account::_displayTimestamp(void)
{
}
