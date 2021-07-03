#include<iostream>

int main(void)
{
    using namespace std;
    
    int ogrenci_sayisi;
    const int not_sayisi = 2;

    cout << "ogrenci sayisi: ";
    (cin >> ogrenci_sayisi).get();
    
    string * ogrenciler = new string[ogrenci_sayisi];
    int * ortalama = new int[ogrenci_sayisi];

    cout << "ogrencilerin isimlerini gir:\n";
    int i;
    for(i = 0; i < ogrenci_sayisi; i++)
    {
        cout << "ogrenci #" << i + 1 << ": ";
        getline(cin, ogrenciler[i]);
    }
    
    int notlar[not_sayisi];
    cout << "ogrencilerin notlari(vize, final): ";
    for(i = 0; i < ogrenci_sayisi; i++)
    {
        for(int j = 0; j < not_sayisi; j++)
            
    }

    cout << "degerlendirilen bilgiler:\n";
    
    for(i = 0; i < ogrenci_sayisi; i++)
    {
        cout << ogrenciler[i] << ":\t";
        for(int j = 0; j < not_sayisi; j++)
            cout << notlar[i][j] << "\t";
        
        cout << endl;
    }

    return 0;

}