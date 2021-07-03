#include<iostream>

int main(void)
{
    using namespace std;

    int x;
    cout << "x = 100 ifadesi, su degere sahiptir: ";
    cout << (x = 100) << endl;
    cout << "now x = " << x << endl;
    
    cout.setf(ios_base::boolalpha);
    cout << "x > 3 ifadesi, su degere sahiptir: ";
    cout << (x > 3) << endl;
    
    
    cout << "x < 3 ifadesi, su degere sahiptir: ";
    cout << (x < 3) << endl;
    

    return 0;
}