/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:44:49 by jv                #+#    #+#             */
/*   Updated: 2024/04/09 23:39:16 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts         = 0;
int Account::_totalAmount        = 0;
int Account::_totalNbDeposits    = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    std::stringstream log;
    std::time_t time = std::time(nullptr);
    
    log << "[";
    log << std::setfill('0');
    log << 1900 + std::localtime(&time)->tm_year;
    log <<  std::setw(2);
    log << 1    + std::localtime(&time)->tm_mon;
    log <<  std::setw(2);
    log <<  std::localtime(&time)->tm_mday;
    log << "_";
    log << std::localtime(&time)->tm_hour;
    log << std::localtime(&time)->tm_min;
    log << std::localtime(&time)->tm_sec;
    log << "]";

    std::cout << log.str() << " " << std::flush;
}

Account::Account(int initial_deposit) {
    this->_accountIndex  = _nbAccounts;
    this->_amount        = initial_deposit;
    this->_nbDeposits    = 0;
    this->_nbWithdrawals = 0;

    _displayTimestamp();
    std::cout << "index:" <<  _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl; 
    _nbAccounts  += 1;
    _totalAmount += initial_deposit;
}

Account::~Account( void ) {
    _nbAccounts  -= 1;
    _displayTimestamp();
    std::cout << "index:";
    std::cout << this->_accountIndex << ";";
    std::cout << "amount:";
    std::cout << this->_amount << ";";
    std::cout << "closed" << std::endl << std::flush;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:"    << _nbAccounts << ";";
    std::cout << "total:"       << _totalAmount << ";";
    std::cout << "deposits:"    << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals;
    std::cout << std::endl;
}

void Account::makeDeposit(int deposit) {
    std::stringstream log;
    
    
    this->_nbDeposits += 1;

    _totalNbDeposits   += 1;
    _totalAmount       += deposit;
    
    _displayTimestamp();

    log << "index:"     << this->_accountIndex << ";";
    log << "p_amount:"  << this->_amount << ";";
    this->_amount     += deposit;
    log << "deposit:"   << deposit << ";";
    log << "amount:"    << this->_amount << ";";
    log << "nb_deposits:" << this->_nbDeposits << std::endl;

    std::cout << log.str() << std::flush;
}

bool Account::makeWithdrawal(int withdrawal) {
    std::stringstream log;
    
    _displayTimestamp();
    
    if (withdrawal < 0) 
        withdrawal *= -1;
        
    if (withdrawal > this->_amount) {
        std::cout << "index:"    << this->_accountIndex << ";";    
        std::cout << "p_amount:" << this->_amount       << ";";    
        std::cout << "withdrawal:refused" << std::endl;    
        return (false);
    }
    std::cout << "index:"    << this->_accountIndex << ";";    
    std::cout << "p_amount:" << this->_amount << ";";    
    std::cout << "withdrawal:" << withdrawal << ";";  
    
    _totalAmount         -= withdrawal;
    this->_amount        -= withdrawal;
    this->_nbWithdrawals += 1;
    _totalNbWithdrawals  += 1;

    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

void Account::displayStatus(void) const {
    std::stringstream log;
    _displayTimestamp();
    log << "index:"      << this->_accountIndex << ";";
    log << "amount:"      << this->_amount       << ";";
    log << "deposits:"    << this->_nbDeposits   << ";";
    log << "withdrawals:" << this->_nbWithdrawals;

    std::cout << log.str() << std::endl << std::flush;
}
