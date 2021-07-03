#include<iostream>

int main(void)
{
    using namespace std;

    string a, b, c, d;


    cout << "isim: ";
    getline(cin, a);
    cout << "soyisim: ";
    getline(cin, b);
    d = " ";
    d += b;

    cout << "cikti\n";
    c = a + d;
    cout << c << endl;

    return 0;
}