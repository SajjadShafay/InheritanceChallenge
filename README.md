#Section 15 Challenge
##Inheritance Challenge

You are provided with a simple Account class hierarchy that contains /n
Account - Base class /n
Savings Account - Derived class /n

An Account has a name and a balance. /n
A Savings Account is an Account and adds an interest rate. /n

I have also provided some Account helper functions in Account_Util.h and Account_Util.cpp that make it easy to display, deposit to, and withdraw from a vector of Accounts and Savings Accounts. /n

Please refer to the source code provided and the video explanation of this challenge for more details. /n

Your challenge is the following: /n

1. Add a Checking account class to the Account hierarchy /n
A checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction. /n
Every withdrawal transaction will be assessed this flat fee. /n

2. Add a Trust account class to the Account hierarchy /n
A trust account has a name, a balance, an an interest rate /n
The trust account deposit works just like a savings account deposit /n
However, any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account. /n

The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance. /n
You don't have to keep track of calendar time for this application, just make sure the 4th deposit fails. /n

Hints: /n
Reuse existing functionality!! /n
Think about what the Base class will be for the new classes. /n
Add helper functions to Account_Util.h and Account_Util.cpp if you wish to work with your new classes. /n
(You don't have to, but it will make your main much easier to use) /n

Have fun!! You are no longer beginner C++ programmers! /n

If you want more practice with operator overloading you can overload += and -= for deposit and withdrawal. /n