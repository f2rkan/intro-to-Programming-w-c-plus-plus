#include<iostream>

struct CandyBar
{
    char brand[20];
    float weight;
    int calories;
};

int main(void)
{
    using namespace std;
    CandyBar snack[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Twixx", 5.4, 240},
        {"Varlhona", 1.7, 330}
    };

    for(int i = 0; i < 3; i++)
    {
        cout << "OP#" << i + 1 << "\n"
             << "brand: "
             << snack[i].brand << endl
             << "weight: "
             << snack[i].weight << endl
             << "calories: "
             << snack[i].calories << "\a\a" << endl;
             
    }
    
    return 0;
}