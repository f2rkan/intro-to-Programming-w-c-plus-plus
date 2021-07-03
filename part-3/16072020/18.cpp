#include<iostream>
#include<iomanip>

int main(void)
{
    using namespace std;
    double hats, heads;

    cout.setf(ios_base::fixed);
    setprecision(3);
   
    cout << "enter a number: ";
        cin >> hats;
    cout << "enter another number: ";
        cin >> heads;
    
    cout << "hats: " << hats << "; heads: " << heads << endl;
    cout << "hats + heads: " << hats + heads << endl;
    cout << "hats * heads: " << hats * heads << endl;
    cout << "hats / heads: " << hats / heads << endl;


    return 0; 
}