#include<iostream>
//function prototype
double harmonic(double x, double y);
int main(void)
{
    using namespace std;
    double x, y;
    cout << "enter two numbers(0 to exit): ";
    while(cin >> x >> y && x != 0 && y != 0)
    {
        cout << "The harmonic mean of " << x << " and " << y << " is " << harmonic(x, y) << endl;
        cout << "enter two numbers(0 to exit): ";
    }
    cout << "Bye!\n";

    return 0;
}
//function definition
double harmonic(double x, double y)
{
    return 2.0 * x * y / (x + y);
}