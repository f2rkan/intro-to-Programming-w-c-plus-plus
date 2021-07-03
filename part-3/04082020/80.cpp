#include<iostream>

int main(void)
{
    using namespace std;

    int I = 0;
    for(;;)
    {
        cout << I << endl;
        I++;
        if(30 <= I) break;
        
    }
}