#include<iostream>
#include<climits>

int main(void)
{
    using namespace std;

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int, " << sizeof(int) << " bytes." << endl;
    cout << "short, " << sizeof n_short << " bytes." << endl;
    cout << "long, " << sizeof n_long << " bytes." << endl;
    cout << "long long, " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "minimum int value = " << INT_MIN << endl;
    cout << "bayt basina bit sayisi: " << CHAR_BIT << endl;

    return 0;
}