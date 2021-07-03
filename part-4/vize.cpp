#include<iostream>
#include<string>
int main(void)
{
    using namespace std;
    
    string name;
    string dessert;

    cout << "enter your name:\n";
        getline(cin, name);
    cout << "enter your fav. dessert:\n";
        getline(cin, dessert);
    cout << "i've some delicious " << dessert
         << " for you " << name << ".\n";

         return 0;
}