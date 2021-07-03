#include<iostream>

using namespace std;

class A
{
    public:
        int i;
        A() {i = 10;}
        ~A() {i = 5;}

};
int Fonk()
{
    int i = 3;
    A ob;
    return i;
}
int main(void)
{
    cout << Fonk() <<endl;
    return 0;
}