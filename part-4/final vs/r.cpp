#include<iostream>
using namespace std;

int Fonk(int * a, int b)
{
    int toplam;
    *a = *a * *a;
    b = b * b;
    toplam = *a + b;

    return toplam;
}
int main(void)
{
    int x = 30;
    int y = 20;
    int *p = &x;
    *p = Fonk(p, y);
    
    cout << x << " " << y << " " << *p;

    return 0;
}