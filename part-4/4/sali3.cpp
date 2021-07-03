#include<iostream>
unsigned long int factorial(unsigned long int n);

int main(void)
{
    using namespace std;
    cout << "enter a number: ";
    unsigned int number;
    while(cin >> number)
    {
        cout << number << "! = " << factorial(number) << endl;
        cout << "enter another number (q to quit): ";
    }
    return 0;
}
unsigned long int factorial(unsigned long int n)
{
    if(0 == n)
    return 1;
    else
    {
        return n * factorial(n-1);
    }
}