#include<iostream>
#include"p.h"

int main(void)
{
    using std::cout;
    using std::endl;

    //Move nesnesi baslat
    cout << "default Move object" << endl;
    Move m;
    m.showmove();

    //ikinci move nesnesini baslat
    cout << "ikinci nesnenin koordinatlari" << endl;
    cout << "(5, -7.8)" << endl;
    Move n(5, -7.8);
    n.showmove();

    cout << "ilk nesnenin degerine reset cek" << endl;
    m.reset(10, 10);
    m.showmove();

    //iki nesneyi birbirine ekleyelim

    cout << "iki nesnenin koordinatlarinin birbirine eklenmis hali" << endl;
    m = m.add(n);
    m.showmove();

    cout << "Bye!" << endl;

    return 0;
}