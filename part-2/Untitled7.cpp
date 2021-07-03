#include<iostream>
using namespace std;

int main()
{
    int a,tekToplam=0,ciftCarpim=1;
    cout<<"sayi gir"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    if(i%2==1)
    tekToplam=tekToplam+i;
    else if(i%2==0)
        ciftCarpim=ciftCarpim+i*i;

    cout<<"tek toplam: "<<tekToplam<<endl;
    cout<<"cift carpim: "<<ciftCarpim<<endl;


    return 0;

}
