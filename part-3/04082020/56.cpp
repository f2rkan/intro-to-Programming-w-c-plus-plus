#include<iostream>

int main(void)
{
    using std::endl;
    using std::cin;
    using std::cout;

    cout << "sayilar kaca kadar artsin: ";
    int limit; cin >> limit;

    cout << "sayilar kacar kacar artsin: ";
    int by; cin >> by;

    for(int i = 0; i <= limit; i += by)
    cout << i << endl;

    return 0;
}