#include<iostream>
#include"deneme.h"

using namespace std;
int main(void)
{
    {
        //yapici tarafından nesne olusturulur
        cout << "yapici, nesneleri olusturuyor:\n";
        
        Stock stock1("Omer", 1, 1.0); //sytax 1
        Stock stock2 = Stock("Furkan", 2, 2.0); //syntax 2

        stock1.show();
        stock2.show();

        cout << "stock 1 degeri stock2'ye atiliyor:\n";
        stock2 = stock1;
        cout << "listing:\n";
        stock1.show();
        stock2.show();

        cout << "liste, yeni degere guncelleniyor:\n";

        stock1 = Stock("deneme", 3, 3.0);
        cout << "revised stock1:\n";
        stock1.show();
        cout << "Done" << endl;
    }

    return 0;
}