#include<iostream>
#include<new>

using namespace std;

int main(void)
{
    int girsayi, j;
    int * pointer;

    cout << "dizi kac elemanli: ";
    cin >> girsayi;
    pointer = &girsayi;
    pointer = new(nothrow) int[girsayi];

    if(pointer == 0) cout << "hata, bellekte yer ayrilamadi" << endl;

    cout << "degerleri gir: ";
    for(j = 0; j < girsayi; j++)
    {
        cin >> pointer[j];
    }
    cout << "iste dizin\n";
    for(j = 0; j < girsayi; j++)
    {
        cout << pointer[j] << endl;
    }
    delete[] pointer;

    return 0;
}