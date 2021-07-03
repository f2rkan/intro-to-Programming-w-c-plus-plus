#include<stdio.h>
#include<conio.h>

int ikilik(int x)
 {
 int i,k[20];
 i=0;
 while(x>=1)
 {
 i++;
 k[i]=x%2;
 x=x/2;
 }

cout<<"\nIkilik tabandaki sayi karsiligi:");
    for(i=i;i>0;i--)
 cout<<k[i];
 }

int main()
 {
 int a;
 cout<<"Bir sayi giriniz:";
 cin>>a;
 ikilik(a);

 return (0);
 }
