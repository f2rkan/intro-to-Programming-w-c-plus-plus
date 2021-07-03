#include<iostream>

int main(void)
{
    using namespace std;

    int * qq = new int[5];

    cout << "diziyi doldur:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> qq[i];
    }
    cout << "yazdiklarin:\n";
    for(int q = 0; q < 5; q++)
    {
        cout << qq[q] << endl;
    }

    delete [] qq;
    return 0;
}