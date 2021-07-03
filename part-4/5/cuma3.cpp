#include<iostream>

double calculate(double num1, double num2, double (*pf)(double, double));
double add(double x, double y);
double multiply(double x, double y);

int main(void)
{
    using namespace std;
    int num1 = 0;
    int num2 = 0;

    cout << "Enter pair of numbers (or a letter to quit): ";
    while(cin >> num1 >> num2)
    {
        cout << "the sum of " << num1 << " and " << num2 << " is "
        << calculate(num1, num2, add) << endl;

        cout << "the product of " << num1 << " and " << num2 << " is "
        << calculate(num1, num2, multiply) << endl << endl;
        
        cout << "enter pair of numbers (or a letter to quit): ";
    }
    return 0;
}
double calculate(double num1, double num2, double (*pf)(double, double))
{
    return (*pf)(num1, num2);
}
double add(double x, double y)
{
    return x + y;
}
double multiply(double x, double y)
{
    return x * y;
}