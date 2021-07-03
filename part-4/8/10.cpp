#include<iostream>

int main(void)
{
    using namespace std;

    int line;
    cout << "enter the number lines: ";
    cin >> line;

    for(int i = 1; i <= line; i++)
    {
        for(int k = 1; k <= line - i; k++)
        {
            cout << "_";
        }
            for(int k = line - i; k < line; k++)
            {
                cout << "-";
            }
            cout << endl;
    }

    return 0;
}