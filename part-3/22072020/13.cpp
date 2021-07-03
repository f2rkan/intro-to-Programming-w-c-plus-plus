#include<iostream>
#include<cstring>
union deneme
{
    char ttt[29];
    float yy;
    double qq;
    int ww;
};

int main(void)
{
    using namespace std;

    deneme t = {"klsdajkalsd"};
        cout << t.ttt << endl;
    t.yy = 6666.66;
        cout << t.yy << ", ";
    t.qq = 5.5;
        cout << t.qq << ", ";
    t.ww = 4;
        cout << t.ww << endl;
    
        cout << t.ttt << endl;
    cout << "union size: " << sizeof t << endl;   
    cout << "union2 size: " << sizeof(deneme) << endl;

    return 0;
}