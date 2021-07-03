#include<iostream>

int main(void)
{
    using namespace std;
    int rows;
    cin >> rows;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows- i; j++)
            cout << ".";
            for(int k = rows - i; k < rows; k++)
                cout << "*";
        
        cout << endl;
    }
}