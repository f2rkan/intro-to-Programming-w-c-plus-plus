#include<iostream>
using namespace std;

int main()
{
    int sayi,sayac=0;
    cout<<"sayiyi gir"<<endl;
    cin>>sayi;
    for(int i=2;i<sayi;i++)
    {
        if(sayi%i==0)
            {sayac=1;}
            {cout<<i<<endl;}
    }
    if(sayac==1)
    {
        cout<<"asal degil";
    }
    else
    {
        cout<<"sayi asal";
    }

    return 0;
}
