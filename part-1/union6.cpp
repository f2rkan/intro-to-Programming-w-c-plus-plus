#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
    union 
    {
      int stok_no;
      float fiyat;
      int tasit_tipi;

      struct 
      {
            char marka[20];
            int model;
            int renk;   
      }araba;
        struct
        {
            char marka[20];
            char model[20];
            int motorgucu;
        }motorsiklet;
    }katalog;

    katalog.stok_no = 100;
    katalog.fiyat = 12000;
    katalog.tasit_tipi = 1;
    strcpy(katalog.araba.marka, "KIA");
    katalog.araba.model = 65;

    cout << katalog.araba.marka << endl;
    cout << katalog.araba.model << endl;
    cout << katalog.motorsiklet.model << endl;
    cout << "*****" << endl;
    strcpy(katalog.motorsiklet.model, "AB");
    cout << katalog.araba.renk << endl;

    return 0;
}