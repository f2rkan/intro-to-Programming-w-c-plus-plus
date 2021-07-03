#include<iostream>

int main(void)
{
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "enter your name: ";
        cin >> name;
    cout << "enter your favourite dessert: ";
        cin >> dessert;
    
    cout << "i have some delicious " << dessert
         << "for u, " << name << endl;
        
    return 0;
}