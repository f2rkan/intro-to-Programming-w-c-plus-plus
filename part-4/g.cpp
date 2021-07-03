#include"g.h"
#include<iostream>
#include<cstring>

void setgolf(golf & g, const char * name, int hc)
{
    std::strcpy(g.fullname, name);
    g.handicap = hc;
    return;
}
int setgolf(golf & g)
{
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "oyuncunun tam adini gir(hicbir sey girmezsen program sonlanir): ";
    cin.get(g.fullname, Len);
    if((g.fullname)[0] == '\0')
    {
        cin.clear();
        cin.get();
        return 0;
    }
    else
    {
        while(cin.get() != '\n')
            continue;
        cout << "oyuncu handikap gir: ";
        cin >> g.handicap;
        cin.get();
        return 1;
    }
}
//handikapı yeni degerlere alır
void handicap(golf & g, int hc)
{
    g.handicap = hc;
    return;
}
//golf struct'ının icerigini goruntuler
void showgolf(const golf & g)
{
    using std::cout;
    using std::endl;

    cout << "oyuncu ismi: " << g.fullname << endl;
    cout << "oyuncu handikapi: " << g.handicap << endl;

    return;
}