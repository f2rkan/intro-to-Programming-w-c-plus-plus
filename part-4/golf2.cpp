#include<iostream>
#include<cstring>
#include"golf2.h"

Golf::Golf() //defaul constructor
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
int Golf::setgolf()
{
    using std::cout;
    using std::cin;

    cout << "oyuncu ismini gir(bosluk quit): ";
    
    //degiskenleri yerel degiskenlerde sakla
    char fullname[Len];
    int handicap;

    cin.get(fullname, Len);
    if((fullname)[0] == '\0')
    {
        cin.clear();
        cin.get();
        return 0;
    }
    else
    {
        while(cin.get() != '\n')
            continue;
        cout << "oyuncu handikapini gir: ";

        while(!(cin >> handicap))
        {
            cin.clear();
            while(cin.get() != '\n')
            continue;
            cout << "tekrar dene: ";
        }
        cin.get();
        //gecici nesne olusturma ve onu cagıran nesneye atama
        Golf player(fullname, handicap);
        * this = player;
        return 1;
    }
}

//yeni hapdikap degerine ayarlar butun handikapları
void Golf::setHandicap(int handicap)
{
    this -> handicap = handicap;
    return;
}
//golf class'ının icini basar
void Golf::showgolf() const
{
    std::cout << "Player name: " << this -> fullname << std::endl;
    std::cout << "Handicap Value: " << this -> handicap << std::endl;

    return;
}