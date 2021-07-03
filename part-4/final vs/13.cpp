#include<iostream>
using namespace std;

class dizi
{
    int x;
    public:
        void a1(int n) {x = n; }
        int oku() {return x; }
};
int main(void)
{
    dizi d[5];
    
    for(int i = 0; i < 5; i++)
        d[i].a1(i);
    
    for(int i = 0; i < 5; i++)
        cout << d[i].oku() << endl;
    
    return 0;
    
}