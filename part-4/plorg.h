/*
DATA
bir plorg'un en fazla 19 harfli bir adı var
OPERATION
yeni bir plorg, bir isim ve 50 Cl ile baslar
bir plorg'un Cl'si degisebilir
bir plorg, adını ve Cl'sini rapor edebilir
varsayılan plorg, Plorga adını taşır

--bir plorg'u temsil eden bir Plorg sınıfı tanımla
(veri üyeleri ve üye fonksiyon prototipleri dahil)
üye fonksiyonları icin fonksiyon tanımlarını yaz. 
Plog sınıfının tum ozelliklerini gosteren kısa bir
program yaz
*/

#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
    private:
        enum{MAX = 20};
        char name[MAX];
        int Cl; //memnuniyet endeksi
    public:
        Plorg(const char * name = "Plorga");
        void changeCl(int Cl);
        void show(void) const; //ismi ve Cl'yi standart cıktıya yazdırır
};

#endif