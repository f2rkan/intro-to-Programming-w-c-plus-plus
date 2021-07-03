#include<iostream>
using namespace std;
class sinif
{
    int x;
    sinif() {x = 6;}
};

int main(void)
{
    sinif * t = new sinif;
    cout << t.x;
}