#include"stock10.h"
#include<iostream>

int main(void)
{
    {
        using std::cout;
        cout << "yapici kullanilarak yeni nesne turetildi:\n";
        Stock stock1("Nano", 12, 20.0); //syntax1
        stock1.show();
        Stock stock2 = Stock("Boffo", 2, 2.0); //syntax2
        stock2.show();

        cout << "stock1, stock2'ye atandi:\n";
        stock2 = stock1;
        cout << "listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout << "yapici kullanilarak resetlenen nesne:\n";
        stock1 = Stock("Nifty", 10, 50.0); //gecici nesne
        cout << "revised stock1:\n";
        stock1.show();
        cout << "Done.\n";
    }

    return 0;
}