#include<iostream>
using namespace std;

struct 
{
    int w[6];
    double z;
    union 
    {
        double y;
        long z,t;
        char b;
        union 
        {
            char m[12];
            float v;
        };
    }B;  
}A;


int main(void)
{
    cout << sizeof(A) <<endl;
    return 0;
}