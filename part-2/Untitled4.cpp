#include<iostream>
using namespace std;

int main()
{
int toplam=0,carpim =1;
    for(int i=1;i<10;i++)
        if(i%2==1){toplam=toplam+i;cout<<"tek toplam: "<<toplam<<endl;}
        else if(i%2==0){carpim=carpim+i*i*i;cout<<"cift carpim: "<<carpim<<endl;}
}
