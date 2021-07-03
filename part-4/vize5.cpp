#include<iostream>

int main(void)
{
    using namespace std;
    int a;
    int sum = 0;

    while(cin >> a)
    {
        sum += a;
        cout << "anlik toplam: " << sum << endl;
    }

    cout << "bye.\n";
    return 0;
}