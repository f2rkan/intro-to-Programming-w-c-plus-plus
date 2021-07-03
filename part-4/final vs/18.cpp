#include<iostream>
using namespace std;

class qq
{
    public:
        int x, y;
        qq() {}
        qq(int, int);
        qq operator*(qq);
};

qq::qq(int a, int b)
{
    x = a;
    y = b;
}

qq qq::operator*(qq q)
{
    qq temp;
    temp.x = x * q.x;
    temp.y = y * q.y;

    return temp;
}
int main(void)
{
    qq a(1, 2);
    qq b(2, 3);
    qq cc;

    cc = a * b;
    cout << cc.x << ", " << cc.y << endl;

    return 0;
}
