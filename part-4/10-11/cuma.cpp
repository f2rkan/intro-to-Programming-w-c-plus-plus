#include<iostream>


using namespace std;

class calisan
{
    //calisan sınıfının public uye fonksiyon ve degiskenleri tanımlanıyor

    public:
        int id;
        string ad;
        string soyad;
        float maas;

        //calisanin bilgilerini saklamak icin ekle() fonksiyonu tanımlanıyor
        void ekle(int i, string s_ad, string s_soyad, float m)
        {
            id = i;
            ad = s_ad;
            soyad = s_soyad;
            maas = m;
        }
        //calisan bilgisi ekranda goruntuleniyor

        void goruntule()
        {
            cout << id << " " << ad << " " << soyad << " " << maas << endl;
        }
};

int main(void)
{
    calisan c1, c2;
    //c1 calisanina ait bilgiler saklanıyor
    c1.ekle(1, "Omer", "Furkan",  10000);
    //c2 calisanına ait bilgiler saklanıypr
    c2.ekle(2, "Ahmet", "Hulle", 9000);

    //c1 calisanının bilgisi ekran gorunuleniyor
    c1.goruntule();

    //c2 ccalisanının bilgisi ekranda goruntuleniyor
    c2.goruntule();

  
    return 0;
}