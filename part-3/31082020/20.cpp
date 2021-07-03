#include<iostream>

const int Fave = 27;

int main(void)
{
    using namespace std;

    int n;
    cout << "1 - 100 arasi tuttugum sayiyi tahmin et, ";
    cout << "benim tuttugum sayi: ";

    do
    {
        cin >> n;
        if(n < Fave)
            cout << "cok dusuk, tekrar dene: ";
            else if (n > Fave)
                cout << "cok yuksek, tekrar dene: ";
                else
                    cout << Fave << " dogru sayiydi, tebrikler!!";

    } while(n != Fave);

    return 0;
}