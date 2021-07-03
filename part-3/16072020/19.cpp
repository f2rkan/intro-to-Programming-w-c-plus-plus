#include<iostream>

int main(void)
{
    using namespace std;
    float a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "a / b: " << a / b;

    return 0;
}