#include<iostream>
using namespace std;
int main(void)
{
    int ints[5];

    int i = 0;
    int b = 0;
    while(i < 12)
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