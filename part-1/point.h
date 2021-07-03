#include<iostream>

using namespace std;

class point
{
    public:
        int x, y;
        point() {x = 0; y = 0; }
        point (int a, int b) {x = a; y = b; }
        bool operator>(point);
        bool operator==(point);
};

bool point::operator>(point p)
{
    if((x > p.x) && (y > p.y)) return true;
    return false;
}
bool point::operator==(point p)
{
    if((x == p.x) && (y == p.y))   return true;
    return false;
}