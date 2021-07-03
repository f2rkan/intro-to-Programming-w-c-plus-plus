#include<iostream>
#include"deneme.h"

using std::cout;
void callme1(stri &); //referansa gore string iletimi
void callme2(stri); //degere gore string iletimi


int main(void)
{
    using std::endl;
    {
        cout << "ic bloga girildi\n";

        stri deneme("Bu ilk yazimiz");
        stri denem2("bu ikinci yazimiz");
        stri denem3("bu ucuncu yazimiz");

        cout << "deneme: " << deneme << endl;
        cout << "deneme2" << denem2 << endl;
        cout << "deneme3: " << denem3 << endl;

        callme1(deneme);
        cout << "nesneli deneme: " << deneme << endl;

        callme2(denem2);
        cout << "degere gore denem2: " << denem2 << endl;

        cout << "yeni bir nesneyi baska bir nesne ile baslatalim\n";
        stri yeni = denem3;
        cout << "yeni: " << yeni << endl;

        cout << "yeni bir nesneyi baska bir nesneye atayalim" << endl;
        stri baska;
        baska = deneme;
        cout << "baska: " << baska << endl;
    }
    cout << "bloktan cikildi" << endl;
    cout << "bye" << endl;
    return 0;
}

void callme1(stri & rr)
{
    cout << "referans tarafindan iletilen string:\n";
    cout << "   \"" << rr << "\"\n";
}

void callme2(stri aa)
{
    cout << "degere gore iletilen string:\n"; 
    cout << "   \"" << aa << "\"\n";
}