#include<iostream>
using namespace std;

int main()
{
    int sayi,sayac=0;
    cout<<"asal sayi analizi icin sayi gir"<<endl;
    cin>>sayi;
    for(int i=2;i<sayi;i++)
    {
        if(sayi%i==0)
        {
        sayac=1;
        }
    }
    if(sayac==0)
        cout<<"sayi asal";
    else
        cout<<"sayi asal degil";
}
