#include<iostream>

const int MAX = 3;
using namespace std;
int main(void)

{
    int yard[MAX];

    cout << MAX << " giris yapabilirsin.\n";
    for(int i = 0; i < MAX; i++)
    {
        cout << "#" << i + 1 << ": ";
        cin >> yard[i];
    }

    cout << "ortalama deger: ";
    double ort = 0;
    for(int i = 0; i < MAX; i++)
    {
        ort += yard[i];
    }
    cout << ort / 3 << endl;

    return 0;

}
