#include "Account.hpp"
#include <iostream>
# include <iomanip>
#include <ctime>


// Static member initialization
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Constructor: initialize account and log creation
Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << initial_deposit << ";created" << std::endl;
	_totalAmount += initial_deposit;
}

// Destructor: log account closure and update stats
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;

	_nbAccounts--;
	_totalAmount -= _amount;
}
// getters
int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

// Display timestamp in [YYYYMMDD_HHMMSS] format
void	Account::_displayTimestamp(void)
{
	time_t timestamp = time(&timestamp);
	struct tm datetime = *localtime(&timestamp);

	std::cout << "[" << std::setfill('0') << 1900 + datetime.tm_year;
	std::cout << std::setw(2) << datetime.tm_mon + 1;
	std::cout << std::setw(2) << datetime.tm_mday;
	std::cout << "_" << std::setw(2) << datetime.tm_hour;
	std::cout << std::setw(2) << datetime.tm_min;
	std::cout << std::setw(2) << datetime.tm_sec << "] ";
}

// Display summary of all accounts
void	Account::displayAccountsInfos(void)
{
	if (!_nbAccounts)
		return ;
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// Display info about this account
void	Account::displayStatus(void) const
{
	if (!_nbAccounts)
		return ;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// Deposit money and update stats
void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount;
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout	<< ";deposit:" << deposit
				<< ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits << std::endl;
}

// Withdraw money if possible, update stats and return success
bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount;
	int aid = _amount - withdrawal;
	if (aid < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	_amount = aid;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout	<< ";withdrawal:" << withdrawal
				<< ";amount:" << aid
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

// Return current amount in the account
int	Account::checkAmount(void) const
{
	return _amount;
}
