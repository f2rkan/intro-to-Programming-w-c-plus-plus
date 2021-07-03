#include<iostream>
#include<cstring>

struct CandyBar
{
    char brand[20];
    float weight;
    int calories;
};

int main(void)
{
    using namespace std;
    CandyBar * snacks = new CandyBar[3];

    strcpy(snacks -> brand, "Twixx");
    snacks -> weight = 1.2;
    snacks -> calories = 120;

    strcpy((snacks + 1) -> brand, "Ulker");
    (snacks + 1) -> weight = 1.1;
    (snacks + 1) -> calories = 122;

    strcpy((snacks + 2) -> brand, "Eti");
    (snacks + 2) -> weight = 1.5;
    (snacks + 2) -> calories = 1222;

    cout << "#1\n";
    cout << "Name: " << snacks -> brand << endl
         << "Weight: " << snacks -> weight << endl
         << "Calories: " << snacks -> calories << endl
    << "\n#2\n"
    << "Name: " << (snacks + 1) -> brand << endl
    << "Weight: " << (snacks + 1) -> weight << endl
    << "Calories: " << (snacks + 1) -> calories << endl
        << "\n#3\n"
        << "Name: " << (snacks + 2) -> brand << endl
        << "Weight: " << (snacks + 2) -> weight << endl
        << "Calories: " << (snacks + 2) -> calories << endl;

    return 0;
}