#include<iostream>
using namespace std;
int kareal(int a)
{
    return a * a;
}

int kareal(int * a)
{
    *a = *a * * a;
    return *a;
}

int kareal2(int &a)
{
    a = a * a;
    return a;
}

int main(void)
{
    cout << "Pointers" << endl;
    int i = 6;
    cout << "karesi: " << kareal(i) << endl;

    cout << "kare: " << kareal(&i) << endl;

    cout << "karee: " << kareal2(i) << endl;

    return 0;
}