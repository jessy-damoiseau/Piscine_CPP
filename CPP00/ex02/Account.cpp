#include <iostream>
#include <string>
#include "Account.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:"\
	<< this->_amount << ";created" << std::endl;
}

Account::~Account() {
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";amount:"\
	<< this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts() {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount() {
	return Account::_totalAmount;
}

int Account::getNbDeposits() {
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals() {
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"\
	<< _totalAmount << ";deposits:" << Account::_totalNbDeposits\
	<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"\
	<< this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:"\
	<< this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"\
		<< this->_amount;
	if (withdrawal > this->_amount)
	{
		 std::cout << ";withdrawal:refused" << std::endl;
		return EXIT_FAILURE;
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	std::cout << ";amount:" << this->_amount << ";nb_withdrawals:"\
	<< this->_nbWithdrawals << std::endl;
	return EXIT_SUCCESS;
}

void Account::displayStatus() const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"\
	<< this->_amount << ";deposits:" << this->_nbDeposits\
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::checkAmount() const {
	return this->_amount;
}

void Account::_displayTimestamp() {
	std::cout << "[19920104_091532] ";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;