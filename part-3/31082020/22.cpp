#include<iostream>

const int ArSize = 6;

int main(void)
{
    using namespace std;
    float naaq[ArSize];
    cout << "negatif giriste sonlanir: ";

    int i = 0;
    float temp;
    cout << "ilk deger: ";
        cin >> temp;

    while(i < ArSize && temp >= 0)
    {
        naaq[i] = temp;
            ++i;
        if(i < ArSize)
        {
            cout << "siradaki deger: ";
                cin >> temp;
        }
    }
    if(i == 0)  cout << "veri yok --bye\n";
    else
    {
        cout << "enter your naaq: ";
        float you;
            cin >> you;
        int count = 0;
            for(int j = 0; j < i; j++)
                if(naaq[j] > you)
                    ++count;

        cout << count;   
    }

    return 0;
}