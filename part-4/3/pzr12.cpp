#include<iostream>
long double probability(unsigned numbers, unsigned picks);

int main(void)
{
    using namespace std;
    double total, total_powerball, choice, choice_powerball;
    cout << "izin verilen kart sayisini ve secim hakki sayisini gir:\n";
    while((cin >> total >> choice) && choice < total)
    {
        cout << "izin verilen pb sayisini ve secenek sayisini gir:\n";
        if((cin >> total_powerball >> choice_powerball) && choice_powerball < total_powerball)
        {
            cout << probability(total, choice) * probability(total_powerball, choice_powerball);
            cout << " sansin var.\n";
            cout << "baska girisler yap ya da tusa bas cik.\n";
        }
        else
        {
            break;
        }
    }
    cout << "Done.\n";
    return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    double p;
    for(n = numbers, p = picks; p > 0; n--, p--)
        result *= n / p;

        return result;
}
