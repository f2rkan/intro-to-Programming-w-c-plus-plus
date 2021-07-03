#include<iostream>
using namespace std;
int main()
{
    cout<<"[1] Bilgisayarlar"<<endl;
    cout<<"[2] Tabletler"<<endl;
    cout<<"[3] Cep Telefonlari"<<endl;
    int secim=0;basla:cin>>secim;
    switch(secim)
    {
       case 1:cout<<"bilgisayarlar"<<endl;break;
       case 2:cout<<"tabletler"<<endl;break;
       case 3:cout<<"cep telefonlari"<<endl;break;
       case 0:goto bitir;
       default:cout<<"hatali tuslama yaptiniz"<<endl;break;

    }
    goto basla;bitir:
    return 0;
}



