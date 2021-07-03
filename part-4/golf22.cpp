#include<iostream>
#include<cstring>
#include"golf2.h"

Golf::Golf() //default constructor
{

}
Golf::Golf(const char * fullname, int handicap)
{
    if('\0' == fullname[0])
        return;
    else
    {
        std::strcpy(this -> fullname, fullname);
        this -> handicap = handicap;
        return;
    }
}
/*fonksiyon, kullanıcıdan isim ve handikap talep
ediyor ve g üyelerini, girilen degerlere ayarlıyor
isim girilirse 1; isim boşsa 0 dondurur*/

int Golf::setgolf()
{
    using std::cout;
    using std::cin;

    cout << "oyuncunun ismi: ";
    char fullname[Len];
    int handicap;

    cin.get(fullname, Len);
    if((fullname)[0] != '\0')
    {
        cin.clear();
        cin.get();
        return 0;
    }
    else
    {
        while(cin.get() != '\n')
        continue;
        cout << "handikap: ";
        while(!(cin >> handicap))
        {
            while(cin.get() != '\n')
            continue;
            cout << "tekrar dene: ";
        }
        cin.get();
        //gecici nesne olustur, this'i, ccagıran nesneye ata
        Golf player(fullname, handicap);
        * this -> player;
        
        return 1;
    }
}
//butun handikap degerlerini, kullanıcı tanımına ayarlar
void Golf::setHandicap(int handicap)
{
    this -> handicap = handicap;
    return;
}
void Golf::showgolf() const
{
    using std::cout;
    using std::endl;

    cout << "oyuncu ismi: " << this -> fullname << endl;
    cout << "handicap: " << this -> handicap << endl;

    return;
}