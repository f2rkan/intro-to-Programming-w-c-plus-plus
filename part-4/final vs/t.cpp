#include<iostream>
using namespace std;
class Point
{
    private:
        int x; int y;
    public:
        Point(int x = 0, int y = 0) {this -> x = x; this -> y = y;}
        Point operator++()
        {
            Point temp;
            temp.x = x++;
            temp.y = y++;
            return temp;
        }
        void yaz()
        {
            cout << "x = " << x << ", " << "y = " << y << endl;
        }
};
int main(void)
{
    Point p1(8, 4), p2(9, 5);
    p1 = ++p1;
    p1.yaz();
    p2++;
    p2.yaz();  
}