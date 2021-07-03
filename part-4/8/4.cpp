#include<iostream>

int main(void)
{
    using namespace std;
    double  balance_simple, balance_compound, interest_simple, interest_compound;
    const int principle = 100;
    int years = 0;

    balance_simple = balance_compound = principle;

    while(balance_compound <= balance_simple)
    {
        interest_simple = 0.1 * 100;
        balance_simple += interest_simple;
        
        interest_compound = 0.05 * balance_compound;
        balance_compound += interest_compound;
        years += 1;
    }
    cout << "after " << years << " years, the balance with "
    "compouding interest exceeds that of the " 
    "simple interest balance " << endl;
    cout << "the compouding interest balance is $" << balance_compound << endl;
    cout << "The simple interest balance is $" << balance_simple << endl;

    return 0;

}