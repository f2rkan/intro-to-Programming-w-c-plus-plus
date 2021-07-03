#include<iostream>
#include<cstring>
#include"golf.h"

Golf::Golf() { }
Golf::Golf(const char * fullname, int handicap)
{
    if('\0' == fullname[0])
        return;
    else
    {
        std::strcpy(this -> fullname, fullname)
        this -> handicap = handicap;
        return;
    }
}
int Golf::setgolf()
{
    using std::cout;
    using std::cin;

    cout << "tam ismi gir(q to quit): ";
    char fullname[Len];

    if((fullname[0]) == '\0')
    {
        cin.clear();
        cin.get();

        return 0;
    }
    else
    {
        while(cin.get() != '\n')
            continue;
        while(!(cin >> handicap))
        {
            cin.clear();
            while(cin.get() != '\n')
                cout << "tekrar dene: ";
        }
        cin.get();
        Golf player(fullname, handicap);
        * this = player;
        
        return 1;
    }
}
void Golf::setHandicap(int handicap)
{
    this -> handicap = handicap;
    return;
}
void Golf::showgolf() const
{
    using std::cout;
    using std::endl;

    cout << "name: " << this -> fullname << endl;
    cout << "handicap: " << this -> handicap << endl;

    return;
}