#include<iostream>

int main(void)
{
    using namespace std;
    string name;
    string dessert;

    cout << "enter your name: ";
    getline(cin, name);
    cout << "enter your favorite dessert: ";
    getline(cin, dessert);

    cout << "I have some delicious " << dessert
         << " for you, " << name << "." << endl;

    return 0;
}