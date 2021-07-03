#include<iostream>

using namespace std;

class dizi
{
    int x;
    public:
        void a1(int n) {x = n;}
        int oku() {return x; }
};

int main(void)
{
    int i;
    dizi d[7];
    
    for(i = 0; i <= 6; i++)
        d[i].a1(i);
    
    for(i = 0; i <= 6; i++)
        cout << d[i].oku() << endl;

    return 0;
}