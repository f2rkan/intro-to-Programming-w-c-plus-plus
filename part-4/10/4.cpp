#include<iostream>

unsigned long int factorial(unsigned int);

int main(void)
{
    using namespace std;

    cout << "factoriyeli hesaplanacak sayiyi gir: ";
    unsigned int fac;
    
    while(cin >> fac)
    {
        cout << fac << "! = " << factorial(fac) << endl;
        cout << "next number: ";
    }

    return 0;
}

unsigned long int factorial(unsigned int n)
{
    if(0 == n)
        return 1;
    
    else  
        return n * factorial(n - 1);
}