#include<iostream>

double vizeFinal(int, int);
int main(void)
{
    using namespace std;

    cout << "ogrenci sayisi: ";
    int ogr_sayisi; (cin >> ogr_sayisi).get();
    string * ogrenciler = new string[ogr_sayisi];

    
    cout << "ogrencilerin isimleri: ";
    for(int i = 0; i < ogr_sayisi; i++)
    {
         cout << "ogrenci " << i + 1 << ": ";
         getline(cin, ogrenciler[i]);
    }    
    int notlar[ogr_sayisi][2];
    cout << "ogrencilerin notlari, vize, final: ";
    for(int i = 0; i < ogr_sayisi; i++)
    {
        for(int j = 0; j < 2; j++)
            (cin >> notlar[i][j]);
           
    }

    cout << "not sonuclari:\n";
    for(int i = 0; i < ogr_sayisi; i++)
    {
        cout << ogrenciler[i] << ":\t";
        for(int j = 0; j < 2; j++)
            cout << notlar[i][j] << "\t";
        
        cout << endl;
    }

    return 0;    
}