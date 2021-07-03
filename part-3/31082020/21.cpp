#include<iostream>

int main(void)
{
    const int Fave = 12;
    using namespace std;

    int n;
    cout << "1-100 arasinda tuttugum fav sayimi tahmin et: ";

    do
    {
        cin >> n;
            if(n < Fave)
                cout << "cok dusuk, tekrar dene: ";
                    else if(n > Fave)
                        cout << "cok yuksek, tekrar dene: ";
                            else
                                cout << "tebrikler! " << n << " dogru sayiydi.\n";
    } while(n != Fave);

    return 0;
}