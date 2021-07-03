#include<iostream>

int main(void)
{
    using namespace std;
    setlocale(LC_ALL,"Turkish");
    double interest_simple, interest_compound, balance_simple, balance_compound;
    int years = 0;
    const int principle = 100;

    balance_simple = balance_compound = principle;

    while(balance_simple >= balance_compound)
    {
        interest_simple = 0.1 * 100;
        balance_simple += interest_simple;

        interest_compound = 0.05 * balance_compound;
        balance_compound += interest_compound;
        years += 1;
    }
    cout << years << " sonra, bilesik faizli para " << balance_compound << " dolara ulasiyor; basit faizli para ise " << balance_simple << " oluyor." << endl;

    cout << "Bye." << endl;
    return 0;
}