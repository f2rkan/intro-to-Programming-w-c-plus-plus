#include<iostream>
#include"point.h"

using namespace std;

int main(void)
{
    point a(3, 1);
    point b(1, 2);
    point c;

    c = a;
    if(c == b)
        cout << "c ile b esit" << endl;
        else if(c == a)
            cout << "c ile a esit" << endl;
                else
                    cout << "c, hicbir nesneye esit degil" << endl;
    
    cout << c.x << ", " << c.y << endl;
    bool x = c > b;
    cout << "c < b midir? " << x << endl;

    return 0; 
}