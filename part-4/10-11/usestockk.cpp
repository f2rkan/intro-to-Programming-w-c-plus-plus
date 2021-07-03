#include<iostream>
#include "stockk10.h"

using namespace std;

int main(void)
{
    {
        //default yapici kullanılarak yeni nesne turetilir
        Stock stock1("deneme1", 1, 1.0); //syntax 1
        stock1.show();

        Stock stock2 = Stock("deneme2", 2, 2.0); //syntax 2
        stock2.show();

        cout << "1'i 2'ye atadik:\n";
        stock2 = stock1;

        cout << "listing 1 and 2:\n";
        stock1.show();
        stock2.show();

        cout << "yapici kullanilarak resetlenen nesne:\n";
        stock1 = Stock("Ddeneme", 3, 3.0);
        stock2 = Stock("Deeqq", 4, 4.0);
        cout << "revised stock1 and stock2:\n";
        stock1.show();
        stock2.show();
        cout << "Done.\n";
    }

    return 0;
}