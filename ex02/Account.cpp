#include "Account.hpp"
#include <iostream>

Account::Account(void)
{

}

Account::Account(int initial_deposit)
	: accountIndex(getNbAccounts())
	, _amount(initial_deposit)
	, _nbDeposits(0)
	, _nbWithdrawals(0) 
{
	_totalAmount += initial_deposit;
	_nbAccounts++;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed" << std::endl;

}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	std::string	year;
	std::string	month;
	std::string	day;
	std::string	hour;
	std::string	minute;
	std::string	second;

	std::time_t	std::time = std::time(NULL);
	year = std::to_string(std::localtime(&std::time)->tm_year + 1900);
	month = std::to_string(std::localtime(&std::time)->tm_mon + 1);
	day = std::to_string(std::localtime(&std::time)->tm_mday);
	hour = std::to_string(std::localtime(&std::time)->tm_hour);
	minute = std::to_string(std::localtime(&std::time)->tm_min);
	std::cout	<< "[" 
				<< year
				<< month
				<< day
				<< "_"
				<< hour
				<< minute
				<< second
				<< "] ";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposit:" << deposit
				<< ";amount:" << _amount + deposit
				<< ";nb_deposits:" << _nbDeposits + 1
				<< std::endl;
	_amount += deposit;
	_nbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
	if (_amount < withdrawal)
	{
		std::cout	<< ";withdrawal:refused" << std::endl;
	}
	else
	{
	std::cout	<< ";withdrawal:" << withdrawal
				<< ";amount:" << _amount - withdrawal
				<< ";nb_withdrawals:" << _nbWithdrawals+ 1
				<< std::endl;
	_amount -= withdrawal;
	_nbWithdrawals++;
	}
}

int		Account::checkAmount(void) const
{
	return _amount;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}
