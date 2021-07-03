#include<iostream>
using namespace std;
int main()
{
    int faktoriyel,sonuc=1;
    cout<<"faktoriyel hesaplanacak sayiyi gir"<<endl;
    cin>>faktoriyel;
    for(int i=2;i<=faktoriyel;i++)
    {

              sonuc=sonuc*i;

    }
    cout<<sonuc;
}
