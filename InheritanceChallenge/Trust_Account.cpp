#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
	: Savings_Account{ name, balance, int_rate }
{
}

// Deposit an extra $50 if amount is over $5000
bool Trust_Account::deposit(double amount)
{
	if (amount >= 5000)
		amount += 50; 
	return Savings_Account::deposit(amount);
}

// Only withdrawals less than 20% of the total balance are allowed and no more than 3 withdrawals
bool Trust_Account::withdraw(double amount)
{
	if (withdrawals == 3)
		return false;
	if (amount >= (balance * 0.2))
		return false; 
	withdrawals++;
	return Savings_Account::withdraw(amount);
}

std::ostream& operator<< (std::ostream& os, const Trust_Account& account)
{
	os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
	return os; 
}