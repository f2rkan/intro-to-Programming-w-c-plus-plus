#ifndef GOLF_H_
#define GOLF_H_

const int Len = 40;
class Golf
{
    //sınıf degimezleri: her oyuncunun bir ismi olmalı
    private:
        char fullname[Len];
        int handicap;
    public:
        //default constructor
        Golf();
        Golf(const char * fullname, int handicap);

        /*fonksiyon, kullanıcıdan isim ve handikap talep
        ediyor ve g üyelerini, girilen degerlere ayarlıyor
        isim girilirse 1; isim boşsa 0 dondurur*/

    int setgolf();

    //handikapları tek bir degere resetler
    void setHandicap(int handicap);
    //golf class'ını basan fonksiyon
    void showgolf() const;
};

#endif