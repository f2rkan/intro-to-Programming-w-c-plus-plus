#include<iostream>

int main(void)
{
    using namespace std;

    enum q {no, yes, maybe};

    char ch; cout << "giris: ";
    cin >> ch;

    switch(ch)
    {
        case 'n': cout << no << endl; break;
        case 'y': cout << yes << endl; break;
        case 'm': cout << maybe << endl; break;
    }

    return 0;
}