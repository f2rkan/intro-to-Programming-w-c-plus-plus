#include<iostream>
#include"qq.h"

const int size = 4;

int main(void)
{
    using std::endl;
    using std::cin;
    using std::cout;

    cout << "en fazla " << size << " oyuncu icin bilgi girebilirsin." << endl;
    int player = 0;
    Golf list[size];

    while(player < size && list[player].setgolf())
    {
        player++;
        cin.ignore(100, '\n');
    }
    
    cout << "iste oyuncularin:" << endl;
    if(player > 0)
    {
        for(int i = 0; i < player; i++)
            list[i].showgolf();
        
        cout << "bir deger gir: ";
        int newhandicap;
        while(!(cin >> newhandicap))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            
            cout << "tekrar dene: ";
        }

        while(cin.get() != '\n')
            continue;
        
        //butun oyuncuların degeri, yeni handikap degerine alınır
        cout << "yeni degerleriyle oyuncularin:" << endl;
        for(int i = 0; i < player; i++)
        {
            list[i].sethandicap(newhandicap);
            list[i].showgolf();
        }
    }
    else
    {
        cout << "dosyada oyuncu bulunamadi" << endl;
    }

    cout << "yeni bir oyuncu icin bilgi girmek ister misin y or n: ";
    char ch;
    cin.get(ch);

    while(cin.get() != '\n')
        continue;
    
    if(ch == 'y' || ch == 'Y')
    {
        char newname[Len];
        int newvalue;

        cout << "isim: ";
        cin.get(newname, Len);

        if(newname[0] == '\0')
        {
            cin.clear();
            return 0;
        }
        
        while(cin.get() != '\n')
            continue;
        
        cout << "handicap: ";
        while(!(cin >> newvalue))
        {
            cin.clear();
            
            while(cin.get() != '\n')
                continue;
            cout << "tekrar dene: ";
        }

        Golf p(newname, newvalue);
        cout << "bunlari girdin: ";
        p.showgolf();
    }

    cout << "bye" << endl;
    return 0;
}