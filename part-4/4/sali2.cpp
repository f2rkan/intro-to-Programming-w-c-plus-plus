#include<iostream>
unsigned long double factorial(unsigned double n);

int main(void)
{
    using namespace std;
    cout << "enter a number: ";
    unsigned double number;

    while(cin >> number)
    {
        cout << number << "! = " << factorial(number) << endl;
        cout << "enter another number(q to quit): ";
    }
    return 0;
}
//a recursive function
unsigned long double factorial(unsigned double n)
{
    if(0 == n)
    return 1;
    else 
    {
        return n * factorial(n - 1);
    }
}