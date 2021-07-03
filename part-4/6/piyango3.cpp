#include<iostream>

long double probability(unsigned numbers, unsigned picks);

int main(void)
{
    using namespace std;
    double total, total_powerball, choices, choices_powerball;

    cout << "toplam secenek sayisini ve izin verilen bahis sayisini gir: ";
    while((cin >> total >> choices) && choices <= total)
    {
        cout << "toplam guc topu sayisini ve izin verilen bahis sayisini gir: ";
        if((cin >> total_powerball >> choices_powerball) && choices_powerball <= total_powerball)
        {
            cout << "you've one change in " << probability(total, choices) * probability(total_powerball, choices_powerball)
            << " of winning.\n";
            cout << "next two numbers (press \"q\" to quit): ";
        }
        else
        break;
    }
    return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n = numbers, p = picks; p > 0; n--, p--)
        result *= n/p;

    return result;
}
