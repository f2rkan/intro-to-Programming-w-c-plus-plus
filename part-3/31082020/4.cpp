#include<iostream>

int main(void)
{
    using namespace std;
    
    double basit_faiz, bilesik_faiz, interest_basit, interest_bilesik;
    const int bakiye = 100;
    int years = 0;
    basit_faiz = bilesik_faiz = bakiye;

    while(bilesik_faiz <= basit_faiz)
    {
        interest_basit = .10 * 100;
        basit_faiz += interest_basit;
        interest_bilesik = .05 * bilesik_faiz;
        bilesik_faiz += interest_bilesik;
        years++;
    }

    cout << years << " yil sonra, bilesik faiz, basit faizi geciyor.\n";
    cout << "bilesik faizli para: $" << bilesik_faiz << endl;
    cout << "basit faizli para : $" << basit_faiz << endl;

    return 0;


}