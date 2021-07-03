#include<iostream>
#include"augmented.h"
using namespace std;

const int STKS = 4;

int main(void)
{
    Stock stocks[STKS] =
    {
            Stock("deneme1", 1, 1.0),
            Stock("deneme2", 2, 2.0),
            Stock("deneme3", 3, 3.0),
            Stock("deneme4", 4, 4.0)
    };
    

    cout << "listing:\n";
    int st;
    for(st = 0; st < STKS; st++)
        stocks[st].show();
    
    //pointeri ilk ogeye ayarlıyoruz
    const Stock * top = &stocks[0];
    //pointerı en yuksek degere ayarlıyoruz
    for(st = 0; st < STKS; st++)
        top = &top -> topval(stocks[st]);
    
    cout << "en degerli eleman:\n";
    top -> show();

    return 0;

}