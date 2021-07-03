#include<iostream>

int main(void)
{
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

    for(i = 0; i < 5; i++)
    
        std::cout << ints[i] << std::endl;
    
    return 0;
}