#include<iostream>
#include"BankAccount.h"

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    BankAccount checking("Omer Furkan", "437357469420", 2000.00);
    cout << "Iste hesabimiz:" << endl;
    checking.printAccount();

    cout << " Hesabimiza $100 yatiriyoruz:" << endl;
    checking.deposit(100);
    checking.printAccount();

    cout << "  Hesabimizdan $75 cekiyoruz." << endl;
    checking.withdraw(75);
    checking.printAccount();

    cout << "illegal operatorleri deneyelim\n";
    cout << "hesaba $-200 yatiriyoruz" << endl;
    checking.deposit(-200);
    checking.printAccount();

    cout << "withdraw $-500" << endl;
    checking.withdraw(-500);
    checking.printAccount();

    cout << "Bye." << endl;
}