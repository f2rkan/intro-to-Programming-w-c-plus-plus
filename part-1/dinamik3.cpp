#include<iostream>
using namespace std;

class Box
{
    public:
        Box() {cout << "yapici cagirildi" << endl;  }
        ~Box() {cout << "yikici cagirildi" << endl; }
};
int main(void)
{
    Box * myBoxArray = new Box[4];
    delete[] myBoxArray;

    return 0;
}