#include<iostream>
long double probability(unsigned numbers, unsigned picks);

int main(void)
{
    using namespace std;
    double total, total_powerball, choices, choices_powerball;

    cout << "toplam kart sayisini ve secenek sayisini gir:\n";
    while((cin >> total >> choices) && total > choices)
    {
        cout << "powerball kart sayisini ve secenek sayisini gir:\n";
        if((cin >> total_powerball >> choices_powerball) && choices_powerball < total_powerball)
        {
            cout << probability(total, choices) * probability(total_powerball, choices_powerball);
            cout << "\n\ntoplam kart sayisini ve secenek sayisini gir ya da \"f\" harfine basip cik.\n";
        }
        else
        {
            break;
        }
    }
    cout << "Done\n";

    return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long int n;
    long int p;

    for(n = numbers, p = picks; p > 0; n--, p--)
    {
        result *= n / p;
    }

    return result;
}