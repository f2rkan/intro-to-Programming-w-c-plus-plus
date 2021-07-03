//pointer degisken aracılıgı ile
//dizi uzerinde dolasma
#include<iostream>

using namespace std;

int main(void)
{
    int dizi[5] = {1, 2, 3, 4, 5};
    int *pdizi;
    pdizi = dizi;

    for(int i = 0; i < 5; i++)
        cout << "dizi[" << i << "] = " << dizi[i] << endl;
    
    cout << "pointer ile dizi elemanlarinin dolasilmasi";
    cout << endl << endl;

    for(int i = 0; i < 5; i++)
        cout << "*(pdizi + " << i << ") = " << *(pdizi + i) << " &pdizi[" << i << "] = " << &pdizi[i] << "\t" << "pdizi + " << i << ": " << pdizi + i <<  endl;

    return 0;
}