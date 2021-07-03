#include<iostream>
#include"qq.h"
#include<cstring>


Golf::Golf() {}
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

    cout << "ismi gir: ";
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
        
        cout << "handicap: ";
        while(!(cin >> handicap))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            
            cout << "tekrar dene, sayi gir: ";
        }   
        cin.get();
        Golf player(fullname, handicap);
        * this = player;
        
        return 1;
    }
}
void Golf::showgolf() const
{
    using std::endl;
    using std::cout;

    cout << "name: " << this -> fullname << endl << "handicap: " << this -> handicap << endl;
    return;
}
void Golf::sethandicap(int handicap)
{
    this -> handicap = handicap;
    return;
}
