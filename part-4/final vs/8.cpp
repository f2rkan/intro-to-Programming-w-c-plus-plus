#include<iostream>
using namespace std;

int main(void)
{
    cout << "siniftaki ogrenci sayisini gir: ";
    int ogr; int sum = 0;
    cin >> ogr;
    int * pointer;

    pointer = new int[ogr];
    int i = 0;
    cout << "her bir ogrencinin notunu gir:" << endl;
    while(i < ogr)
    {
        cin >> pointer[i];
        sum += pointer[i];
        i++;
        
    }

    cout << "ortalama: " << sum / ogr;
    delete[] pointer;
    return 0;
    

}