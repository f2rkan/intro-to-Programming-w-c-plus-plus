#include<iostream>

int main(void)
{
    using namespace std;

    int giris;
    cin >> giris;

    for(int i = 1; i <= giris; i++)
    {
        for(int k = 1; k <= giris - i; k++)
            cout << ".";
                for(int j = giris - i; j < giris; j++)
                    cout << "*";

        cout << endl;
    }
}