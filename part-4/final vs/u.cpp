#include<iostream>
using namespace std;
class point
{
    public:
        point(int a, int b)
        {
            cout << "Yapici cagrildi:" << (++a+b--);}
            point() {cout <<"Yapici cagrildi:";}
        
};
int main(void)
{
    point *t2;
    point t1(6, 4);
    return 0;
}