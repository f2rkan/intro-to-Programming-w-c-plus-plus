#include<iostream>

int main(void)
{
    using namespace std;
    double ted, * t;
    t = &ted;
    *t = 17;

    //two ways
    cout << *t << endl;
    cout << ted << endl;

    return 0;
}