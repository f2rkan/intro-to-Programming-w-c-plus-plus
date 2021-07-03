#include<iostream>
#include"d.h"

using namespace std;

int main(void)
{
    {
        Stock stock1("deneme", 1, 1.0);
        Stock stock2 = Stock("deneme2", 2, 2.0);
        
        cout << "listing stock1 and stock2\n";
        stock1.show();
        stock2.show();

        cout << "1'i 2'ye atadik\n";
        stock2 = stock1;

        cout << "listing:\n";
        stock1.show();
        stock2.show();

        cout << "stock2 yeniden dizayn edildi:\n";
        stock2 = Stock("yeniden", 3, 3.0);
        stock2.show();
    }

    return 0;
}