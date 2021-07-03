#include<iostream>

int main(void)
{
    using namespace std;
    struct CandyBar
    {
        char brand[20];
        float weight;
        int calories;
    } snack =
    {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "Our snack brand is " << snack.brand << endl
         << "The weight is " << snack.weight << endl
         << "And it calories " << snack.calories << endl;
    
    return 0;
}