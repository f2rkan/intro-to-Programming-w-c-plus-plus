#include<iostream>

int main(void)
{
    using namespace std;

    int x;
    int i = 1;
    int sum = 0;
    cout << i << ". sayi: ";
    cin >> x;
    sum += x;
    cout << "anlik toplam: " << sum << endl;
    while(x != 0)
    {
        cout << i + 1 << ". sayi: ";
        cin >> x;
        i++;
        sum += x;
        cout << "anlik toplam: " << sum << endl;
    }

    cout << "done!" << endl;
    return 0;
    
}