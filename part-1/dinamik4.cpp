#include<iostream>

using namespace std;

int main(void)
{
    int len, sum = 0;
    cout << "siniftaki ogrenci sayisini gir: ";
    cin >> len;

    int * marks = new int[len];

    cout << "ogrencilerin notlarini gir: ";
    int i = 0;
    while(i < len)
    {
        cin >> *(marks + i);
        i++;
    }
    i = 0;
    while(i < len)
    {
        sum += *(marks + i);
        i++;
    }
    cout << "ortalama: " << sum / len << endl;

    delete[] marks;

    return 0;
}