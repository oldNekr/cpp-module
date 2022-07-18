#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) { // 1 [19920104_091532] index:0;amount:42;created
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) { //[19920104_091532] index:0;amount:47;closed
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {  // 2,5 [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
	_displayTimestamp();
	std::cout 	<< "accounts:" << _nbAccounts << ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits << "withdrawals:" << _totalNbWithdrawals << std::endl;
}  ///?

void Account::makeDeposit(int deposit) { // 4 [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	this->_totalNbDeposits++;
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit
				<< ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	this->_totalAmount += deposit;
	this->_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) { // 7 [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	_displayTimestamp();
	std::cout 	<< "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawals:";
	if (withdrawal > this->_amount) { //[19920104_091532] index:0;p_amount:47;withdrawal:refused
		std::cout << "refused" << std::endl;
		return false;
	}
	this->_totalAmount -=withdrawal;
	this->_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount() const {
	return (getTotalAmount());
}

void Account::displayStatus() const { // 3,6 [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp() {
	std::time_t _time = time(nullptr);
	tm *_localTime = localtime(&_time);
	char _strTime[100];

	std::strftime(_strTime, sizeof(_strTime), "[%Y%m%d_%H%M%S]", _localTime);
	std::cout << _strTime;
}
