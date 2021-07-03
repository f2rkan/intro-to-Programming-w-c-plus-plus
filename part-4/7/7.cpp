#include<iostream>

struct williamWingate
{
    char brand[40];
    double diameter;
    int weight;   
};

int main(void)
{
    using namespace std;
    williamWingate order;
    cout << "enter the brand: ";
    cin.getline(order.brand, 40);

    cout << "enter the diameter: ";
    cin >> order.diameter;

    cout << "enter the weight: ";
    cin >> order.weight;

    cout << "brand: " << order.brand << endl;
    cout << "diameter: " << order.diameter << endl;
    cout << "weight: " << order.weight << endl;

    return 0;
}