#include<iostream>
#include"BankAccount.h"

BankAccount::BankAccount(std::string name, std::string account, double balance)
{
    using std::cout;
    using std::endl;

    this -> name = name;
    this -> account = account;

    if(balance >= 0)
        this -> balance = balance;
    
    else
    {
        cout << "Negatif bakiyen olamaz. Bakiyen 0'a ayarlandi.\n";
        this -> balance = 0.0;
    }
}
void BankAccount::printAccount(void) const
{
    using std::cout;
    using std::endl;

    cout << "Name: " << name << endl;
    cout << "Account #:" << account << endl;
    cout << "Balance: $" << balance << endl;
}
void BankAccount::deposit(double sum)
{
    using std::cout;
    using std::endl;

    if(sum < 0)
    {
        cout << "yatirilan para negatif oalmaz. islem yarida kaldi.\n";
    }
    else
        balance += sum;
}
void BankAccount::withdraw(double sum)
{
    using std::cout;
    using std::endl;

    if(sum <= balance && sum >= 0)
        balance -= sum;
    else if (sum < 0)
    {
        cout << "cekilen miktar negatif olamaz." << endl;
        cout << "para cekim islemi yarida kaldi." << endl;
    }
    else if (sum > balance)
    {
        cout << "sahip oldugundan fazla miktarda para cekemezsin. islem iptal edildi.\n";
    }
}