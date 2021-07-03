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
        cout << "out of range --tekrar dene: ";
        cin >> num;
    }
    int val = (int)num;

    cout << "girdigin sayi: " << val << endl;

    return 0;
}
bool is_int(double x)
{
    if(x > INT_MAX || x < INT_MIN) return false;
    else return true;
}