#include<iostream>

struct CandyBar
{
    char name[30];
    double weight;
    int calories;  
};

int main(void)
{
    using namespace std;
    
    CandyBar snack[3] = {{"ulker", 2.1, 340}, {"eti", 3.2, 444}, {"torku", 3.2, 500}};

    cout << "siralama:\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "name: " << snack[i].name << endl;
        cout << "weight: " << snack[i].weight << endl;
        cout << "calories: " << snack[i].calories << endl;
    }

    cout << "Done!" << endl;

    return 0; 
}