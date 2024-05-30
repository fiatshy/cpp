#include "Account.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main(void)
{
    std::cout << "hello world" << std::endl;
    typedef std::vector<Account::t>	    					  accounts_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	accounts_t				accounts( amounts, amounts + amounts_size );

    (void) amounts;
    (void) amounts_size;
    (void) accounts;
}