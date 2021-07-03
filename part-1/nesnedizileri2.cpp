#include<iostream>

using namespace std;

class dizi
{
    private:
        int a;
    public:
        void a1(int n) {a = n;}
        int oku() {return a; }
};

int main(void)
{
    dizi d[7];
    int i;

    for(i = 0; i <= 6; i++)
        d[i].a1(i);
    
    for(i = 0; i <= 6; i++)
        cout << d[i].oku() << endl;


    return 0;
}