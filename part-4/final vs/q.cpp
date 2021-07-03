#include<iostream>
using namespace std;
class A
{
    public:
        int i;
        A(){i = 7;}
        ~A(){i = 3;}
};
int Fonk()
{
    int i =5;
    A ob;
    return i;
}
int main(void)
{
    cout << Fonk() << endl;
    return 0;
}