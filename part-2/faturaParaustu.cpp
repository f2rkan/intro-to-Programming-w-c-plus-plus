#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    double fatura,paraMiktari,kalan;
    cout<<"fatura miktar�n� gir"<<endl;
    cin>>fatura;
    cout<<"yatiracagin para miktarini gir"<<endl;
    cin>>paraMiktari;
    if(!(paraMiktari==fatura || fatura>paraMiktari))
        cout<<"para yat�r";
    else
    kalan=paraMiktari-fatura;


}
