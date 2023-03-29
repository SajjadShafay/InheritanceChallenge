#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"
#include <string>
#include <iostream>

// Checking account is a type of account
// charges a fee of $1.50 for every withdrawal
// Deposit is the same as regular account

class Checking_Account : public Account
{
	friend std::ostream& operator<< (std::ostream& os, const Checking_Account& account);
private:
	static constexpr const char* def_name = "Unnamed Savings Account";
	static constexpr double def_balance = 0.0; 
protected:
	const double flat_fee = 1.50;
public:
	Checking_Account(std::string name = def_name, double balance = def_balance);
	bool withdraw(double amount);
	// Inherits the Account::deposit method

};


#endif // _CHECKING_ACCOUNT_H_