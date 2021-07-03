#include<iostream>
#include<cstdlib> //rand(), srand() prototypes
#include<ctime>
#include"vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); //rastgele sayı üretici
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "enter target distance (q to quit): ";

    while(cin >> target)
    {
        cout << "enter step length: ";
        if(!(cin >> dstep))
            break;
        
        while(result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "after " << steps << " steps, the subject "
         "has the following location:\n";
         cout << result << endl;
         result.polar_mode();
         cout << "or\n" << result << endl;
         cout << "average outward distance per step = "
            << result.magval() / steps << endl;

            steps = 0;
            result.reset(0.0, 0.0);
            cout << "enter target distance (q to quit): ";
    }
    cout << "bye!" << endl;
    cin.clear();
    while(cin.get() != '\n')
        continue;
    
    return 0;
}