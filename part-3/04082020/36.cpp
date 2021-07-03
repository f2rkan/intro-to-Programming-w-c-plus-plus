#include<iostream>

struct fish
    {
      double weight;
      double inch;  
    };

int main(void)
{
    using namespace std;

    fish * kind = new fish;

    cout << "weight: ";
    cin >> kind -> weight;
    cout << "inch: ";
    cin >> kind -> inch;

    cout << "girislerin:\n";
    cout << kind -> weight << "\t" << kind -> inch << endl;

    return 0;    
}