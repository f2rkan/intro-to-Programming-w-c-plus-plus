#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_
#include<iostream>

class BankAccount
{
    private:
        std::string name;
        std::string account;
        double balance;
    public:
        BankAccount(std::string name, std::string account, double balance = 0.0);
        void printAccount(void) const;
        void deposit(double sum);
        void withdraw(double sum);
};

#endif