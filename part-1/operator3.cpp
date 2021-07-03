#include<iostream>

using namespace std;

class Point2d
{
    public:
        int x, y;
        Point2d() {x = 0; y = 0;}
        Point2d(int, int);
        int operator*(Point2d);
};

Point2d::Point2d(int a, int b)
{
    x = a;
    y = b;
}
int Point2d::operator*(Point2d param)
{
    int dot;
    dot = (x * param.x) + (y * param.y);
    
    return dot;
}

int main(void)
{
    Point2d a(3, 1);
    Point2d b(1, 2);

    int carpim;
    carpim = a * b;
    cout << carpim << endl;

    return 0;
}