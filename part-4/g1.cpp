#include<iostream>
#include"g.h"

const int size = 5;

int main(void)
{
    using std::cout;
    using std::endl;
    using std::cin;

    //oyuncu girisi ve kataloglama
    cout << "en fazla " << size << " oyuncu girebilirsin.\n";
    int players = 0;
    golf list[size];
    while(players < size && setgolf(list[players]))
    {
        players++;
    }
    //oyuncuları bas
    cout << "iste oyuncular:\n";
    if(players > 0)
    {
        for(int i = 0; i < players; i++)
        {
            showgolf(list[i]);
        }
        //kullanıcı, yeni handikap degerleri giriyor
        cout << "bir numara gir: ";
        int newHandicap;
        cin.clear();
        while(!(cin >> newHandicap))
        {
            cin.clear();
            while(cin.get() != '\n')
            continue;
            cout << "tekrar dene: ";
        }
        //tum oyuncuların handikap degeri, kullanıcı tarafından
        //verilen degere alınır ve oyuncular tekrar basılır
        cout << "yeni hc degerleriyle oyuncularin:\n";
        for(int i = 0; i < players; i++)
        {
            handicap(list[i], newHandicap);
            showgolf(list[i]);
        }
    }
    else
    {
        cout << "dosyada oyuncu yok\n";
    }
    cout << "tekrar giris yapmak ister misin y or n: ";
    char ch;
    cin.get();
    cin.get(ch);
    while(cin.get() != '\n')
        continue;

    if(ch == 'y' || ch == 'Y')
    {
        char lastPlayerName[Len];
        int lastPlayerHandicap;
        cout << "oyuncu ismini gir: ";

        cin.get(lastPlayerName, Len);
        while(cin.get() != '\n')
            continue;
        cout << "oyuncunun yeni handikapini gir: ";
        while(!(cin >> lastPlayerHandicap))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "tekrar dene: ";
        }
        golf lastPlayer;
        setgolf(lastPlayer, lastPlayerName, lastPlayerHandicap);
        cout << "iste bunlari girdin::\n";
        showgolf(lastPlayer);
    }

    return 0;
}