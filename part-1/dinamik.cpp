#include<iostream>
#include<new>

using namespace std;

int main(void)
{
    int girsayi, j;
    int * pointer;
    cout << "dizi kac elemanli: ";
    cin >> girsayi;

    pointer = new (nothrow) int[girsayi];

    if(pointer == 0)
        cout << "hata, bellekte alan isgal edilemedi" << endl;
    
    for(int j = 0; j < girsayi; j++)
    {
        cout << "sayilari gir: ";
        cin >> pointer[j];
    }
    for(int i = 0; i < girsayi; i++)
        cout << pointer[i] << endl;

    return 0;
}