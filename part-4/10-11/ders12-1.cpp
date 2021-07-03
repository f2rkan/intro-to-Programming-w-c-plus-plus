#include<iostream>
using namespace std;

struct ogrenci
{
      string ad;
      string soyad;
      int ogr_no;
      int puanlar[3];

      struct
      {
          string ders_ad;
          int kredi;
      }ders;
      
}o3;

int main(void)
{
    ogrenci o1 = {"Ali", "Yilmaz", 435, {50, 60, 80}};

    o1.ders.ders_ad = "Programlama";

    ogrenci o2 = {"Ayse", "Yilmaz", 437, {40, 50, 60}};
    o2.ders.kredi = 7;

    ogrenci * o3 = &o1;

    struct ogrenci sinif[2];
    sinif[0].ad = "A";
    sinif[0].soyad = "B";

    sinif[1].ad = "C";
    sinif[1].soyad = "D";

    cout << o1.ad << endl;
    cout << o2.ad << endl;
    cout << o1.puanlar[0] << endl;
    cout << o3 -> ad << endl;

    cout << endl << endl;
    cout << o2.ders.kredi << endl << o1.ders.ders_ad << endl;


    cout << endl << endl << sinif[0].ad << endl;
    return 0;
}