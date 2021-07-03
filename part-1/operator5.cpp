#include<iostream>
using namespace std;

class KARMASIK
{
    public:
        int x, y;
        KARMASIK() {x = 0; y = 0;}
        KARMASIK operator*(KARMASIK & k);
        void yaz() const;
        void giris();
        
};
KARMASIK KARMASIK::operator*(KARMASIK & k)
{
    KARMASIK karma;
    karma.x = (x * k.x) + (x * k.y);
    karma.y = (y * k.y) + (y * k.x);

    return karma;
}

void KARMASIK::yaz() const
{
    cout << x;
    if(y > 0) cout << "-" << y << endl;
    else cout << y << endl;
}

void KARMASIK::giris()
{
    cin >> x;
    cin >> y;
}




int main(void)
{
    KARMASIK c1, c2;
    
    c1.giris();
    c2.giris();

    c1 = c1 * c2;
    
    //2 nesne olusturma sart kosuldugu icin sonucu ekstra bir nesne olusturarak degil var olan nesnelerden biriyle buluyorum sonucu
    c1.yaz();

    return 0;    
}