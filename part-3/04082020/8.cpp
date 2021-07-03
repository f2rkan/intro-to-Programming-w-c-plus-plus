#include<iostream>

int main(void)
{
    using namespace std;
    double wages[3] = {1, 2, 3};
    short stacks[3] = {3, 2, 1};

    double * pw = wages;
    short * ps = &stacks[0];

    cout << "pw = " << pw << ", *pw = " << * pw << endl;

    pw += 1;
    cout << "pw pointer'ına 1 ekledik:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << endl;

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps += 1;
    cout << "ps pointer'ına 1 ekledik:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << endl;

    cout << "stacks[0] = " << stacks[0]
         << ", stacks[1] = " << stacks[1] << endl;
    cout << "*stacks = " << *stacks
         << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";


    return 0;
}