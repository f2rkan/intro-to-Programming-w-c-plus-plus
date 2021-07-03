#include<iostream>
#include<cstring>
#include"q.h"

Golf::Golf() {}
Golf::Golf(const char * fn, int d)
{
    if('\0' == fullname[0])
        return;
    else
    {
        std::strcpy(this -> fullname, fn);
        this -> deger = d;
        return;
    }
}
int Golf::setgolf()
{
    using std::cout;
    using std::cin;

    char fullname[Len];
    int deger;

    cout << "isim: ";
    cin.get(fullname, Len);

    if((fullname[0]) == '\0')
    {
        cin.clear();
        cin.get();
        return 0;
    }
    else
    {
        while(cin.get() == '\n')
        continue;
        
        cout << "handicap degeri: ";
        while(!(cin >> deger))
        {
            cin.clear();
            cin.get();
            cout << "tekrar dene: ";
        }

        cin.get();
        Golf player(fullname, deger);
        * this = player;
        
        return 1;
    }
}
void Golf::setdeger(int d)
{
    this -> deger = d;
    return;
}
void Golf::showgolf() const
{
    using std::cout;
    using std::endl;

    cout << "name: " << this -> fullname << endl << "handicap: " << this -> deger << endl;
}