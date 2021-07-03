#include<iostream>

struct CandyBar
{
    std::string name;
    double weight;
    int calories;  
};

int main(void)
{
    using namespace std;

    CandyBar snack[3];

    cout << "girisler:\n";

    for(int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". marka icin giris yapiorsun:\n";
        cout << "name: "; getline(cin, snack[i].name);
        cout << "weight: "; cin >> snack[i].weight;
        cout << "calories: "; (cin >> snack[i].calories).get();
    }

    cout << "girislerin:\n";

    for(int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". marka bilgileri:\n";
        cout << "name: " << snack[i].name << endl;
        cout << "weight: " << snack[i].weight << endl;
        cout << "calories: " << snack[i].calories << endl;
    }

    cout << endl << endl << "Done!" << endl;

    return 0;
}