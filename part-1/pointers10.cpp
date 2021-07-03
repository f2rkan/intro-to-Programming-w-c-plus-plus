#include<iostream>

using namespace std;

int main(void)
{
    int dizi[5] = {1, 2, 3, 4, 5};
    const int * pdizi;
    pdizi = dizi;

    cout << "dizinin 1. elemani(dizi[0]) = *pdizi: " << *pdizi << endl;
    cout << "2. eleman (dizi[1]) =  *(dizi + 1) = " << *(dizi + 1) << endl;
    cout << "3. &dizi[2] = pdizi + 2 = " << pdizi + 2 << endl;
    cout << "4. dizi[3] = *(pdizi + 3): " << *(pdizi + 3) << endl;
    cout << "5. &dizi[4] = pdizi[4]: " << pdizi[4] << endl; 

    return 0;
}