#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    anamenu:
    cout<<"[1] Bilgisayarlar"<<endl;
    cout<<"[2] Tabletler"<<endl;
    cout<<"[3] Cep Telefonlari"<<endl;
    int secim=0,sepet=0,secenek,secenek2,secenek3;cin>>secim;
    switch(secim)
    {
       case 1:cout<<"[4]Asus: 1 TL\n[5]Lenovo: 7599 TL\n[6]Casper: 2499 TL\n\n1'den fazla bilgisayar alisverisi icin 98'i tusla\nAnamenuye donmek icin 99'u tusla\nSepete gitmek icin 0'i tusla"<<endl;break;
       menu:cin>>secenek;
       switch(secenek)
       {
           case 4:sepet=sepet+4699;break;
           case 5:sepet=sepet+7599;break;
           case 6:sepet=sepet+2499;break;
           case 98:goto menu;
           case 99:goto anamenu;break;
           case 0:goto hesap;
           default:cout<<"hatali tuslama"<<endl;break;
       }
       case 2:cout<<"[7]APPLE iPad Wi-Fi 32GB Tablet Silver: 2499 TL\n[8]CASPER VIA.S10 MT8127 2GB 16GB 10 inç IPS Tablet: 829 TL\n[9]SAMSUNG Galaxy Tab S4 Tablet Siyah: 3999 TL\n\n1'den fazla tablet alisverisi icin 98'i tusla\nAnamenuye donmek icin 99'u tusla\nSepete gitmek icin 0'i tusla"<<endl;break;
       menu2:cin>>secenek2;
       switch(secenek2)
       {
           case 7:sepet=sepet+2499;break;
           case 8:sepet=sepet+829;break;
           case 9:sepet=sepet+3999;break;
           case 98:goto menu2;
           case 99:goto anamenu;break;
           case 0:goto hesap;
           default:cout<<"hatali tuslama"<<endl;break;
       }
       case 3:cout<<"[10]huawei: 5456 TL\n[11]iphone: 3223 TL"<<endl;break;

       menu3:cin>>secenek3;
       switch(secenek3)
       {
           case 7:sepet=sepet+65466;break;
           case 8:sepet=sepet+5456;break;
           case 98:goto menu3;
           case 99:goto anamenu;break;
           case 0:goto hesap;
           default:cout<<"hatali tuslama"<<endl;break;
       }
       default:cout<<"hatali tuslama yaptiniz"<<endl;break;

    }
    goto menu;
    hesap:
    cout<<sepet<<"TL";
    return 0;
}



