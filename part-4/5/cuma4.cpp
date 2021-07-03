#include<iostream>

double calculate(double num1, double num2, double (*pf)(double, double));
double add(double x, double y);
double multiply(double x, double y);

int main(void)
{
    using namespace std;
    double num1,num2;

    cout << "bir cift sayi gir: ";
    while(cin >> num1 >> num2)
    {
        cout << num1 << " ve " << num2 << "; ";
        cout << "toplamlari: " << calculate(num1, num2, add) << endl;
        cout << "carpimlari: " << calculate(num1, num2, multiply) << endl;

        cout << "baska bir cift sayi girisi yap yada bir harfe basarak cik: "; 
    }
    cout << "Done.\n";

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