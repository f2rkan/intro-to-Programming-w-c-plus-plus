#include<iostream>

int main(void)
{
    using namespace std;

    cout << "geri sayim: ";
    int sayim;
    cin >> sayim;

    int i;
    for(i = sayim; i; i--)
    cout << i << endl;

    cout << "sayi sonunda " << i << "'a indi.\n";

    return 0;
}