#include<iostream>
#include"deneme.h"
using namespace std;

BankAccount::BankAccount(std::string name, std::string account, double balance)
{
    this -> name = name;
    this -> account = account;

    if(balance >= 0)
        this -> balance = balance;
    else
    {
        cout << "para miktarin negatif olamaz." << endl;
        cout << "para miktarin 0'a ayarlandi." << endl;
        this -> balance = 0;
    }
}
void BankAccount::deposit(double sum)
{
    if(sum >= 0 && sum <= balance)
        balance += sum;
    else
    {
        cout << "yatirilan tutar negatif olamaz." << endl;
        cout << "islem yarida kaldi" << endl;
    }
}
void BankAccount::printAccount(void) const
{
    cout << "Name: " << name << endl;
    cout << "Account: " << account << endl;
    cout << "Balance: " << balance << endl;
}
void BankAccount::withdraw(double sum)
{
    if(sum >= 0 && sum < balance)
        balance -= sum;
    else if (sum < 0)
    {
        cout << "para cekme tutari negatif olamaz, islem yarida kaldi" << endl;
    }
    else if (sum > balance)
    {
        cout << "sahip oldugundan fazlasini cekemezsin" << endl;
    }
}