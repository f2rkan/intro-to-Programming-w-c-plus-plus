#include<iostream>

using namespace std;

class Point2d
{
    public:
        int x, y;
        Point2d() {x = 0; y = 0; }
        Point2d(int, int);
        int operator<(Point2d param);
        int operator>(Point2d param);
};
Point2d::Point2d(int a, int b)
{
    x = a;
    y = b;
}
int Point2d ::operator> (Point2d param) { return x > param.x && y > param.y; }


int Point2d::operator<(Point2d param)
{
    return x < param.x && y < param.y;
}

int main(void)
{
    Point2d a(5, 1);
    Point2d b(9, 3);

    if(a > b)
    {
        cout << "a'nin her iki degeri b'den buyuk" << endl;
    }
    else
    {
        cout << "a'nin her iki degeri b'den buyuk degil" << endl;
    }

    if(a < b)
    {
        cout << "a'nin her iki degeri b'den kucuk" << endl;
    }
    else
    {
        cout << "a'nin her iki degeri b'den kucuk degil" << endl;
    }

    return 0;
}