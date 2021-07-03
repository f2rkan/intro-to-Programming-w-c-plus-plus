#include<iostream>

int main(void)
{
    using namespace std;

    double basitFaiz, bilesikFaiz, interestBasit, interestBilesik;
    const int bakiye = 100;
    basitFaiz = bilesikFaiz = bakiye;
    int years = 0;

    while(bilesikFaiz <= basitFaiz)
    {
        interestBasit = .10 * 100;
        basitFaiz += interestBasit;
        interestBilesik = .05 * bilesikFaiz;
        bilesikFaiz += interestBilesik;
        years++;
    }
    cout << years << " yil sonra, bilesik faiz, "
         << "basit faizi gecior." << endl;
    cout << "bilesik faiz: $" << bilesikFaiz << endl
         << "basit faiz: $" << basitFaiz << endl;
    
    return 0;
}