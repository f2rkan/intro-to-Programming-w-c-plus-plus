#include<iostream>

int main(void)
{
    using namespace std;

    for(int i = 0; i <= 9; i++)
    {
        for(int j = 0; j <= 9; j++)
            {cout << i << " * " << j << " = " << i * j << "\t";}
        cout << endl;
    }

    return 0;
}