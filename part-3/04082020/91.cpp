#include<iostream>

const int satir = 4, sutun = 5;

int main(void)
{
    using namespace std;

    const char * cities[sutun] =
    {
        "izmir",
        "bolu",
        "konya",
        "maras",
        "antep"
    };

    int maxsicaklik[satir][sutun] =
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };

    for(int i = 0; i < sutun; ++i)
    {
        cout << cities[i] << ":\t";
        for(int j = 0; j < satir; ++j)
            cout << maxsicaklik[j][i] << "\t";
        
        cout << endl;
    }

    return 0;
}