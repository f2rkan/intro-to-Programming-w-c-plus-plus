#include<iostream>
using namespace std;

class ogrenci
{
    private:
        int ogrenci_no;
        string ogrenci_adi;
    public:
        ogrenci(int ogr_no, string ogr_adi)
        {
            ogrenci_no = ogr_no;
            ogrenci_adi = ogr_adi;
        }
        int oku_ogrno() {return ogrenci_no; }
        string oku_ogradi() {return ogrenci_adi; }
};

int main(void)
{
    ogrenci ogr1(163, "Ali");
    ogrenci * p_ogr;
    p_ogr = &ogr1;

    cout << "ogrenci no: " << ogr1.oku_ogrno() << endl;
    cout << "ogrenci adi: " << p_ogr ->oku_ogradi() << endl;

    return 0;
}