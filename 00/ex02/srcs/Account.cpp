#include "Account.hpp"
#include <iostream>

int Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos( void )
{
    std::cout << "accounts:" << getNbAccounts() << ";" 
            << "total:" << getTotalAmount() << ";"
            << "deposits:" << getNbDeposits() << ";"
            << "withdrawls:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
    this->_accountIndex = this->getNbAccounts();;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount += initial_deposit;
    this->_totalAmount += initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";"
                << "amount:" << initial_deposit << ";"
                << "created"<< std::endl;
    _nbAccounts++;
};
Account::~Account( void )
{
    std::cout << "index:" << this->_accountIndex << ";"
                << "amount:" << this->_amount << ";closed" << std::endl;
};

void    Account::makeDeposit( int deposit )
{
    std::cout << "index:" << this->_accountIndex << ";"
            << "pamount:" << this->_amount << ";"
            << "deposits:" << deposit << ";";
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_totalNbDeposits++;
    this->_nbDeposits++;    
    std::cout << "amount:" << this->_amount << ";"
            << "nb_deposits:" << this->_nbDeposits << std::endl;
};
bool	Account::makeWithdrawal( int withdrawal )
{
    std::cout << "index:" << this->_accountIndex << ";"
            << "pamount:" << this->_amount << ";"
            << "withdrawal:";
    if (this->_amount - withdrawal < 0)
    {
        std::cout << "refused" << std::endl;
    }
    else
    {
        this->_amount -= withdrawal;
        this->_totalAmount -= withdrawal;
        this->_totalNbWithdrawals++;
        this->_nbWithdrawals++;    
        std::cout << withdrawal << ";" << "amount:" << this->_amount << ";"
                << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    }
    return (true);
};
int		Account::checkAmount( void ) const
{
    std::cout << "checkAmount" << std::endl;
    return (0);
};
void	Account::displayStatus( void ) const
{
    std::cout << "index:" << this->_accountIndex << ";"
                << "amount:" << this->_amount << ";"
                << "deposits:" << this->_nbDeposits << ";"
                << "withdrawals:" << this->_nbWithdrawals << std::endl;

};
Account::Account( void )
{
};