#include<iostream>
long double probability(unsigned numbers, unsigned picks);

int main(void)
{
    using namespace std;
    double total, total_powerball, choices, choices_powerball;
    cout << "izin verilen kart sayisini ve bahis sayisini gir: ";
    
    while((cin >> total >> choices) && choices <= total)
    {
        cout << "izin verilen oyun karti sayisini ve guc topu sayisini gir: ";

        if((cin >> total_powerball >> choices_powerball) && choices_powerball <= total_powerball)
        {
            cout << probability(total, choices) * probability(total_powerball, choices_powerball) << "'de sansin var" << endl;
            cout << "siradaki iki sayiyi gir ya da \"q\" tusuna basarak programi sonlandir:\n";
        }
        else
        {
            break;
        }
    }
    cout << "Bye!\n";

    return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    double p;
    long double n;
    
    for(n = numbers, p = picks; p > 0; n--, p--)
    result = result * n / p;
    
    return result;
}