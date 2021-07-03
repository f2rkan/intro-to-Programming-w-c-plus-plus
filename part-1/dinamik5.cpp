#include<iostream>

using namespace std;

int main(void)
{
    int i, j;
    int maxr, maxc;

    int * matrix;
    cout << "satir, sutun: ";
    cin >> maxr >> maxc;

    matrix = new int[maxr * maxc];
    cout << "her bir satir icin deger gir:\n";
    for(i = 0; i < maxr; i++)
    {
        for(j = 0; j < maxc; j++)
        {
            cin >> *(matrix + i * maxc + j);
        }
    }
    cout << "iste olusturdugun dizi:\n";
    for(i = 0; i < maxr; i++)
    {
        for(j = 0; j < maxc; j++)
        {
            cout << *(matrix + i * maxc + j) << "\t";
        }
        cout << endl;
    }

    delete[] matrix;
    cout << "bitti" << endl;
    
    return 0;
}