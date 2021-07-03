#include<iostream>

using namespace std;

class dizi
{
    private:
        int x, y;
    public:
        dizi(int n, int k) {x = n; y = k; }
        void oku() {cout << "x: " << x << ", y: " << y << endl;}
};

int main(void)
{
    //nesne dizisine baslangıc degerleri veriliyor
    dizi d[3] = {{1, 2}, {3, 5}, {47, 79}};
    int i;

    for(i = 0; i <= 2; i++)
        d[i].oku();
    
    return 0;
}