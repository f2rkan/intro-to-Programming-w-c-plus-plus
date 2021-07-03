#include<iostream>

enum season
{
    k = 1,
    t = 2,
    p = 3,
    b = 4
} cards;

int main(void)
{
    using namespace std;
   
    season sezon;
    sezon = k;
    cout << k + 1;
    return 0;
}