#include<iostream>
#include"bankaccount.h"

BankAccount::BankAccount(std::string name, std::string account, double bal)
{
    using std::cout;
    using std::endl;

    this -> name = name;
    this -> account = account;

    if(balance >= 0)
    {
        this -> balance = bal;
    }
    else
    {
        cout << "paran negatif olamaz. paran 0'a ayarlandi.\n";
        this -> balance = 0;
    }
}
void BankAccount::printBank(void) const
{
    using std::cout;
    using std::endl;

    cout << "name: " << name << endl
    << "account: " << account << endl
    << "balance: " << balance << endl;
}
void BankAccount::deposit(double bal)
{
    using std::cout;
    using std::endl;

    if(bal < 0)
    {
        cout << "yatirilan tutar negatif olamaz. islem yarida kaldi.\n";
    }
    else
        balance += bal;       
}
void BankAccount::withdraw(double bal)
{
    using std::cout;
    using std::endl;

    if(bal <= balance && bal >= 0)
        balance -= bal;
    else if (bal < 0)
    {
        cout << "para cekme miktari negatif olamaz.\nislem yarida kaldi.\n";
    }
    else if(bal > balance)
    {
        cout << "sahip oldugundan fazlasini cekemezsin.\n";
    }
}