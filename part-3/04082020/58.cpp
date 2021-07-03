#include<iostream>
#include<string>

int main(void)
{
    using namespace std;
    cout << "bir string ifadesi gir: ";
    string metin; cin >> metin;

    for(int i = metin.size() - 1; i >= 0; i--)
        cout << metin[i];


    return 0;
}