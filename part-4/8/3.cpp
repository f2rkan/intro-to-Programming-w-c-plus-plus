#include<iostream>

int main(void)
{
    using namespace std;
    int num, sum = 0;

    cout << "sayi girisi yap, 0 girersen program sonlanir: ";
    cin >> num;
    while(num != 0)
    {
        sum += num;
        cin >> num;
    }
    cout << "genel toplam: " << sum << endl;
    return 0;
}