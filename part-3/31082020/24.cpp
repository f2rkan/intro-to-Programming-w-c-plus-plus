#include<iostream>
#include<climits>

bool is_int(double);

int main(void)
{
    using namespace std;

    double num;

    cout << "tamsayi gir: ";
    cin >> num;

    while(!is_int(num))
    {
        cout << "out of range --please try again: ";
        cin >> num;
    }
    int val = int(num);

    cout << "girdigin deger: " << val << "\nBye\n";

    return 0;
}
bool is_int(double x)
{
    if(x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
}