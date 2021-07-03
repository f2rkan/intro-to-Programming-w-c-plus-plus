#include<iostream>

int main(void)
{
    using namespace std;

    int giris;
    cin >> giris;

    for(int i = 1; i <= giris; i++)
    {
        for(int j = 1; j <= giris - i; j++)
            cout << ".";
                for(int k = giris - i; k < giris; k++)
                    cout << "*";
        
        cout << endl;
    }

    return 0;
}