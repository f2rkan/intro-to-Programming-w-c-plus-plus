#include<iostream>

using namespace std;

class poi
{
    public:
        int x, y;
        int operator<(poi & p);
        int operator>(poi & p);
        poi() {x = 0; y = 0; }
        poi(int, int);
};

int poi::operator>(poi & p)
{
    return x > p.x && y > p.y;
}
int poi::operator<(poi & p)
{
    return x < p.x && y < p.y;
}
poi::poi(int a, int b)
{
    x = a;
    y = b;
}

int main(void)
{
    poi a(0, 0);
    poi b(0, 0);

    if(a > b) cout << "a > b" << endl;
    else cout << "a'nin hicbir degeri b'den buyuk degil" << endl;
    if(a < b) cout << "a < b" << endl;
    else  cout << "b'nin hicbir degeri a'dan buyuk degil" << endl;

    return 0;
}