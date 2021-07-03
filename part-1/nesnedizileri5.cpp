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
    dizi d[4][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int i, j;

    cout << "dizi elemanlari:\n";

    for(i = 0; i < 4; i++)
        {
            for(j = 0;  j < 3; j++)
            {
                cout << "[" << i << "][" << j << "]: ";
                cout << d[i][j].oku() << endl;
            }
        }
    
    return 0;
}