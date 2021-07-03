#include<iostream>

const int ogrenci_ismi = 3;
const int ogrenci_notu = 2;


int main(void)
{
    using namespace std;

    const char * ogrenci[ogrenci_ismi] =
    {
        "xx xx",
        "yy yy",
        "zz zz"
    };
    
    int notlar[ogrenci_ismi][ogrenci_notu] =
    {
        {50, 90},
        {60, 80},
        {90, 20}
    };

    cout << "cekilen bilgilerin toplanmis hali:\n";
    for(int i = 0; i < ogrenci_ismi; ++i)
    {
        cout << ogrenci[i] << ":\t";
            for(int j = 0; j < ogrenci_notu; ++j)    
                cout << notlar[i][j] << "\t";
                
        cout << endl;
    }

    return 0;
}
