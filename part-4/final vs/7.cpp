#include<iostream>
using namespace std;

class box
{
    public:
    box() {cout << "yapici" << endl;}
    ~box() {cout << "yikici" << endl; } 
};
int main(void)
{
    box * my = new box [4];
    delete[] my;
    enum t {q , w, e , r};
    cout << sizeof(t) << endl;
    return 0;
}