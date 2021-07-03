#include<iostream>
using namespace std;
int main()
{
    int sepet=0;
    setlocale(LC_ALL,"Turkish");
    anamenu:
    cout<<"[1] Bilgisayarlar"<<endl;
    cout<<"[2] Tabletler"<<endl;
    cout<<"[3] Cep Telefonlari"<<endl;
    int secim,secenek;cin>>secim;
    switch(secim)
    {
       case 1:cout<<"[1]Asus: 1 TL\n[2]Lenovo: 7599 TL\n[3]Casper: 2499 TL";
       cout<<"\n\nAnamenuye donmek icin 99'u tusla\nSepete gitmek icin 0'i tusla"<<endl;break;
       case 2:cout<<"[4]APPLE iPad Wi-Fi 32GB Tablet Silver: 2499 TL";
       cout<<"\n[5]CASPER VIA.S10 MT8127 2GB 16GB 10 inç IPS Tablet: 829 TL\n";
       cout<<"[6]SAMSUNG Galaxy Tab S4 Tablet Siyah: 3999 TL\n\n\n";
       cout<<"Anamenuye donmek icin 99'u tusla\nSepete gitmek icin 0'i tusla";
       cout<<endl;break;
       case 3:cout<<"[7]LENOVO K6 Note 3/32GB: 999 TL\n[8]SAMSUNG Galaxy J6+: 1449 TL";
       cout<<"\n[9]SAMSUNG Galaxy j4+: 1299 TL\n\n\nAnamenuye donmek icin 99'u tusla\nSepete gitmek icin 0'i tusla";
       cout<<endl;break;
       default:cout<<"hatali tuslama yaptiniz"<<endl;break;
           menu:cin>>secenek;
       switch(secenek)
       {
           case 1:sepet=sepet+4699;break;
           case 2:sepet=sepet+7599;break;
           case 3:sepet=sepet+2499;break;
           case 4:sepet=sepet+2499;break;
           case 5:sepet=sepet+829;break;
           case 6:sepet=sepet+3999;break;
           case 7:sepet=sepet+999;break;
           case 8:sepet=sepet+1449;break;
           case 9:sepet=sepet+1299;break;
           case 99:goto anamenu;break;
           case 0:goto hesap;

           default:cout<<"hatali tuslama"<<endl;break;
    }

}
    goto menu;hesap:cout<<sepet<<" TL";
    return 0;
}




