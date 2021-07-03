#include<iostream>
using namespace std;

class deneme
{
    public:
        int x, y;
        deneme() {x = 0; y = 0;}
        int operator<(deneme &);
        int operator>(deneme &);
        deneme(int, int);
};

deneme::deneme(int a, int b)
{
    x = a;
    y = b;
}
int deneme::operator<(deneme &q)
{
    return x < q.x && y < q.y;
}
int deneme::operator>(deneme &q)
{
    return x > q.x && y > q.y;
}
int main(void)
{
    deneme w(1, 2);
    deneme e(4, 5);

    if(w > e)    cout << "w > e" << endl;
    else     cout << "w, e'den buyuk degil" << endl;
    if(w < e) cout << "w < e " << endl;
    else    cout << "w, e'den kucuk degil" << endl;

    return 0;
}