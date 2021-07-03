#include<iostream>

struct pizza
{
    char name[40];
    double diameter;
    int weight;
};

int main(void)
{
    using namespace std;
    pizza * pie = new pizza;

    cout << "enter the diameter: ";
    cin >> pie -> diameter;
    cin.get();

    cout << "enter the name: ";
    cin.getline(pie -> name, 40);

    cout << "enter the weight: ";
    cin >> pie -> weight;

    cout << "name: " << pie -> name << "\ndiameter: " << pie -> diameter
         << "\nweight: " << pie -> weight << endl;

    return 0;
}