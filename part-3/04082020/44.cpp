#include<iostream>

struct CandyBar
{
    char name[40];
    double weight;
    int calories;  
};

int main(void)
{
    using namespace std;

    CandyBar snack {"Mocha Munch", 2.3, 350};

    cout << "name: " << snack.name << endl;
    cout << "weight: " << snack.weight << endl;
    cout << "calories: " << snack.calories << endl;

    return 0;
}