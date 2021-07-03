#include<iostream>
using namespace std;

int ikilik(int x)
{
int i,k[30];
i=0;
while(x>=1)
{
i++;
k[i]=x%2;
x=x/2;
}

printf("\nIkilik taban karsiligi:");
for(i=i;i>0;i--)
cout<<i;
}

int main()
{int a;
cout<<"Bir sayi giriniz:"<<endl;
cin>>a;
int ikilik=a;
return (0);
}
