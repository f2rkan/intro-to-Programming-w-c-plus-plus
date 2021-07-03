#include<iostream>
using namespace std;

class test
{
    int x;
    test() {x = 13;}
};

int main(void)
{
    test * t = new test;
    cout << t->x;
}