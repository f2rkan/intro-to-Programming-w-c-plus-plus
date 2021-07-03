#include<iostream>

using namespace std;

int main(void)
{
    int matris[4][5] = {{1, 2, 3, 4, 5}, 
                        {6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20} 
                       };
    int dizi[5] = {1, 2, 3, 4, 5};

    cout << *(&matris[0][0] + 15) << endl;

    return 0;
}