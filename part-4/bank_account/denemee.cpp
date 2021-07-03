#include<iostream>
#include"deneme.h"
using namespace std;

int main(void)
{
    BankAccount checking("Omer", "43735746942", 2000.00);
    checking.printAccount();

    cout << "1. Para Ekleme\t2. Para Cekme" << endl;
    cout << "3. mevcut bakiye goruntuleme\t0. Cikis" << endl;

    int choice;
    double miktar;
    while(cin >> choice && choice != 0)
    {
        
        if(choice >= 1 && choice <= 3)
        {
            Q:
            switch(choice)
            {
                case 1:
                    cout << "yatiracagin para miktari: ";
                    cin >> miktar;
                    checking.deposit(miktar);
                        break;
                case 2:
                    cout << "cekecegin para miktari: ";
                    cin >> miktar;
                    checking.withdraw(miktar);
                        break;
                case 3:
                    checking.printAccount();
                        break;
                default: cout << "gecersiz secim" << endl;
                        break;
            }
            cout << "1. Para Ekleme\t2. Para Cekme" << endl;
            cout << "3. mevcut bakiye goruntuleme\t0. Cikis" << endl;
        }
        else
        {
            cin.ignore(100, '\n');
            cout << "gecerli bir secim yap:" << endl;
            cout << "1. Para Ekleme\t2. Para Cekme" << endl;
            cout << "3. mevcut bakiye goruntuleme\t0. Cikis" << endl;
            cin >> choice;
            goto Q;
        }
    }

    return 0;
}