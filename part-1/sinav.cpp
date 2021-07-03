#include<iostream>
using namespace std;

int main(void)
{
    int dizi[2][3] = { {4,7,8}, {11,7,31}};
    int i = 1, j = 1;
    cout << ++dizi[i--][++j] << endl;
}