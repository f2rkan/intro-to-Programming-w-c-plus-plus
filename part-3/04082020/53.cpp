#include<iostream>
const int ArSize = 16;

int main(void)
{
    long long factorials[ArSize];
    factorials[0] = factorials[1] = 1LL;

    int i;
    for(i = 2; i < ArSize; i++)
    factorials[i] = i * factorials[i - 1];

    for(i = 0; i < ArSize; i++)
    std::cout << i << "! = " << factorials[i] << std::endl;

    return 0;
}