#include<iostream>
#include"golf2.h"

const int size = 5;

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    cout << "en fazla " << size << " oyuncu bilgisi girebilirsin." << endl;
    int players = 0;
    Golf list[size];
    while(players < size && list[players].setgolf())
    {
        players++;
        cin.ignore(100, '\n');
    }

    //oyuncuları bas
    cout << "iste oyuncular:\n";
    if(players > 0)
    {
        for(int i = 0; i < players; i++)
            list[i].showgolf();
        
        //kullanıcıdan yeni handikap degeri al
        cout << "enter a number: ";
        int newHandicap;

        while(!(cin >> newHandicap))
        {
            cin.clear();
            while(cin.get() != '\n')
            continue;
            cout << "tekrar dene: ";
        }
        while(cin.get() != '\n')
        continue;

        cout << "yeni:\n";
        for(int i = 0; i < players; i++)
        {
            list[i].setHandicap(newHandicap);
            list[i].showgolf();
        }
    }
    else
    {
        cout << "no.\n";
    }
    return 0;
}