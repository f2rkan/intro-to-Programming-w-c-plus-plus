#include<iostream>
using namespace std;

class dizi
{
    int x;
    public:
        dizi(int n) {x = n;}
        int oku() {return x; }
};

int main(void)
{
    dizi d[4] = {1, 2, 3, 4};
    int i;

    dizi * p;
    p = d;

    for(i = 0; i < 4; i++)
    {
        cout << p -> oku() << endl;
        p++;
    }
    return 0;
}