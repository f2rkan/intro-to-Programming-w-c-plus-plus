#include<iostream>

int main(void)
{
    using namespace std;

    int ints[5] {};

    int i = 0, b = 0;
    while(ints[4] == 0)
    {
        
        if(i % 2 == 1)
        {
            ints[b] = i;
            b++;
        }
        i++;
    }

    for(int q = 0; q < 5; q++)
        cout << ints[q] << endl;

    return 0;
}