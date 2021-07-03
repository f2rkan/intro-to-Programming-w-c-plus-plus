#include<iostream>

const int ArSize = 50;
int main(void)
{
    using namespace std;

    char name[ArSize];
    cin.get(name, ArSize).get(); // same as cin.get(name, ArSize); cin.get();   
}