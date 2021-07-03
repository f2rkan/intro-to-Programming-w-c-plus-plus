#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_
#include<iostream>

class BankAccount
{
    private:
        std::string name, account;
        double balance;
    public:
        BankAccount(std::string name, std::string acc, double bal);
        void printBank(void) const;
        void deposit(double bal);
        void withdraw(double bal);
};
#endif