#include<iostream>
#include"bankaccount.h"

using namespace std;

int main(void)
{
    BankAccount b("Omer", "43735746942", 2000.00);
    cout << "iste hesabin:\n";
    b.printBank();
    
    cout << "\nhesaba $100 yatirdik:\n";
    b.deposit(100);
    b.printBank();

    cout << "\nhesaptan $300 cektik.\n";
    b.withdraw(300);
    b.printBank();

    cout << "Bye.\n";
    return 0;
}