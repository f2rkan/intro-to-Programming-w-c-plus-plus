#include<iostream>
using namespace std;

class dizi
{
        int x;
    public:
        dizi(int n) {x = n; }
        int oku() {return x; }
};

int main(void)
{
    //nesne dizisine baslangıc degerleri veriliyor
    dizi d[4] = {1, 2, 5, 6};
    int i;

    //dizinin baslangıc adresi alınıyor

    dizi * p;
    p = d;

    //gosterge birer birer artırılarak degerler goruntuleniyor
    for(i = 0; i < 4; i++)
        {
            cout << p -> oku() << endl;
            p++;
        }

        return 0;
}