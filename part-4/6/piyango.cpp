#include<iostream>

long double probability(unsigned numbers, unsigned picks);

int main(void)
{
    using namespace std;
    double total, choices, total_powerball, choices_powerball;

    cout << "oyundaki toplam secenek sayisini ve izin verilen bahis sayisini gir:" << endl;

    while((cin >> total >> choices) && choices <= total)
    {
        cout << "oyundaki toplam secenek sayisini ve guc topu icin izin verilen bahis sayisini gir:\n";
        if((cin >> total_powerball >> choices_powerball) && choices_powerball <= total_powerball)
        {
            cout << "you've one change in " << probability(total, choices) * probability(total_powerball, choices_powerball);
            cout << " of winning.\n";
            cout << "Next two numbers (\"q\" to quit): ";
        }
        else
        break;           
    }
    cout << "Bye\n";
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