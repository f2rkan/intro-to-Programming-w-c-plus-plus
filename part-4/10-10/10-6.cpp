#include<iostream>
#include"move.h"

int main(void)
{
    using std::cout;
    using std::endl;

    //Move nesnesini baslat
    cout << "defaul Move object" << endl;
    Move m;
    m.showmove();

    //ikinci Move nesnesini baslat
    cout << "ikinci nesnenin koordinatlari:" << endl;
    cout << "(5, -3.2)" << endl;
    Move n(5, -3.2);
    n.showmove();

    cout << "ilk nesnenin degerlerini sifirla\n";
    m.reset(10, 10);
    m.showmove();

    //ilk nesneyi ekleyelim ve degerlerini ilk nesneye atalım

    cout << "iki nesnenin koordinatlarini birbirine ekleyelim\n";

    m = m.add(n);
    m.showmove();

    cout << "Bye!" << endl;

    return 0;
}