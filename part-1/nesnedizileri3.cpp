#include<iostream>
using namespace std;

class dizi
{
        int x;
    public:
        dizi(int n) {x = n; }
        int oku() {return x; }
};

int main(void)
{
    //nesne dizisine baslangıc degerleri veriliyor

    dizi d[4] = {1, 2, 5, 7};
    int i;

    //nesne dizisinin icerigi goruntuleniyor

    for(i = 0; i <= 3; i++)
        cout << d[i].oku() << endl;
    
    return 0;
}