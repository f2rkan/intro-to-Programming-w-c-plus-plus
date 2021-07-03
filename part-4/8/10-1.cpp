#include<iostream>

int main(void)
{
    using namespace std;
    int line;
    cout << "enter the line: ";
    cin >> line;

    for(int i = 1; i <= line; i++)
    {
        for(int k = 1; k <= line - i; k++)
        {
            cout << ".";
        }
            for(int k = line - i; k < line; k++)
            {
                cout << "*";
            }
            cout << endl;
    }

    return 0;
}