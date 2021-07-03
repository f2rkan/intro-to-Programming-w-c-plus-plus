#include<iostream>
using namespace std;

class ogrenci
{
    private:
        int no;
        string ad;
    public:
        ogrenci(int n, string a)
        {
            no = n;
            ad = a;
        }
        int oku_no() {return no; }
        string oku_ad() {return ad; }
};
int main(void)
{
    ogrenci o(123, "Ali");
    ogrenci * p_ogr;
    p_ogr = &o;

    cout << "no: " << p_ogr -> oku_no() << endl;
    cout << "isim: " << o.oku_ad() << endl;

    return 0;
}