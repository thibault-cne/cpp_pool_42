#include <iostream>
#include <iomanip>
#include <ctime>

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
  return _nbAccounts;  
}

int Account::getTotalAmount(void) {
  return _totalAmount;
}

int Account::getNbDeposits(void) {
  return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
  return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:"
    << _nbAccounts
    << ";total:"
    << _totalAmount
    << ";deposits:"
    << _totalNbDeposits
    << ";withdrawals:"
    << _totalNbWithdrawals
    << std::endl;
}

Account::Account(int initial_deposit) {
  _accountIndex = _nbAccounts;
  _amount = initial_deposit;
  _nbDeposits = 0;
  _nbWithdrawals = 0;

  _nbAccounts += 1;
  _totalAmount += initial_deposit;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

  return;
}

Account::~Account(void) {
  _nbAccounts -= 1;
  _totalAmount -= _amount;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;

  return;
}

void Account::makeDeposit(int deposit) {
  int p_amount;

  p_amount = _amount;

  _amount += deposit;
  _totalAmount += deposit;
  _nbDeposits += 1;
  _totalNbDeposits += 1;

  _displayTimestamp();
  std::cout << "index:"
    << _accountIndex
    << ";p_amount:"
    << p_amount
    << ";deposit:"
    << deposit
    << ";amout:"
    << _amount
    << ";nb_deposits:"
    << _nbDeposits
    << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  if (_amount < withdrawal) {
    
    _displayTimestamp();
    std::cout << "index:"
      << _accountIndex
      << ";p_amount:"
      << _amount
      << ";withdrawal:refused"
      << std::endl;

    return false; 
  }

  int p_amount;
  p_amount = _amount;

  _amount -= withdrawal;
  _totalAmount -= withdrawal;
  _nbWithdrawals += 1;
  _totalNbWithdrawals += 1;

  _displayTimestamp();
  std::cout << "index:"
    << _accountIndex
    << ";p_amount:"
    << p_amount
    << ";withdrawal:"
    << withdrawal
    << ";amout:"
    << _amount
    << ";nb_withdrawals:"
    << _nbWithdrawals
    << std::endl;

  return true;
}

int Account::checkAmount() const {
  return _amount;
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:"
    << _accountIndex
    << ";amount:"
    << _amount
    << ";deposits:"
    << _nbDeposits
    << ";withdrawals:"
    << _nbWithdrawals
    << std::endl;
}

void	Account::_displayTimestamp(void) {
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	std::cout << '[' << (now->tm_year + 1900);
	std::cout << std::setw(2) << std::setfill('0') << (now->tm_mon + 1);
	std::cout << std::setw(2) << std::setfill('0') << now->tm_mday << '_';
	std::cout << std::setw(2) << std::setfill('0') << now->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}

Account::Account(void) {
  return;
}
