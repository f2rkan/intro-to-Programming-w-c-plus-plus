#include<iostream>
//function template prototype
template<typename T> //or class T
void Swap(T &a, T &b);

int main(void)
{
    using namespace std;

    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i,j); //generates void swap(int &, int &);
    cout << "Now i , j = " << i << ", " << j << ".\n";

    double x = 24.5;
    double y = 81.7;

    cout << "x, y = " << x << ", " << y << endl;
    cout << "using compiler - generated double swapper:\n";
    Swap(x,y); //generates void swap(double &, double &);
    cout << "Now x, y = " << x << ", " << y << ".\n";

    return 0;
}
//fonksiyon sablonu tanımlama:
template<typename T> //or class T
void Swap(T &a, T &b)
{
    T temp; //temp, T degiskeni oldu
    temp = a;
    a = b;
    b = temp;
}