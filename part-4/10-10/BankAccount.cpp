#include"BankAccount.h"
#include<iostream>

BankAccount::BankAccount(std::string name, std::string account, double balance)
{
    using std::cout;
    using std::endl;

    this -> name = name;
    this -> account = account;

    if(balance >= 0)
        this -> balance = balance;
    else
        cout << "para miktarin negatif olamaz." << endl << "para miktarin 0'a ayarlandi." << endl;
}
void BankAccount::printAccount(void) const
{
    using std::cout;
    using std::endl;

    cout << "Name: " << name << endl;
    cout << "Account: " << account << endl;
    cout << "Balance: " << balance << endl;
}
void BankAccount::deposit(double sum)
{
    using std::cout;
    using std::endl;

    if(sum >= 0)
        balance += sum;
    else
    {
        cout << "yatirilan para miktari negatif olamaz.";
        cout << endl;
        cout << "para yatirma islemi yarida kaldi." << endl;
    }
}
void BankAccount::withdraw(double sum)
{
    using std::endl;
    using std::cout;

    if(sum >= 0 && sum <= balance)
        balance -= sum;
    else if (sum < 0)
    {
        cout << "para cekme islemi negatif olamaz." << endl;
        cout << "para cekme islemi yarida kaldi." << endl;
    }
    else if (sum > balance)
    {
        cout << "sahip oldugundan fazlasini cekemezsin." << endl;
        cout << "para cekme islemi yarida kaldi." << endl;
    }
}
