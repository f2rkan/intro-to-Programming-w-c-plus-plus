#include<iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "Turkish");
    int sayi,sayac=0;
    cout<<"analiz icin sayi gir"<<endl;
    cin>>sayi;
    for(int i=2;i<sayi;i++)
    {
        if(sayi%i==0)
            sayac=1;
    }
    if(sayac==1)
        cout<<"sayý asal degil"<<endl;
    else
        cout<<"sayý asal"<<endl;
}

