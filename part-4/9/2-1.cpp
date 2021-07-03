#include<iostream>

const int Max = 10;
int main(void)
{
    using namespace std;
    double donation[Max];
    int index = 0;
    int value, total = 0;

    cout << "donation " << index + 1 << ": ";
    cin >> value;

    while(cin.good() && index < Max)
    {
        donation[index] = value;
        total += value;
        if(++index < Max)
        {
            cout << "donation " << index + 1 << ": ";
            cin >> value;
        }
    }
    cout << "ortalama bagis: " << total / index << endl;
    int ortalama_ustu = 0;
    for(int i = 0; i < index; i++)
    {
        if(donation[i] > total / index)
        ortalama_ustu++;
    } 
    cout << "ortalama ustu bagis yapan kisi sayisi: " << ortalama_ustu << endl;

    return 0;
}