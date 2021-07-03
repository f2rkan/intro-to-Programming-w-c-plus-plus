#include<iostream>
using namespace std;

int main()
{
    int a=1,n,faktoriyel=1;
    cout<<"faktoriyel hesaplanacak sayiyi gir"<<endl;
    cin>>n;
    for(a;a<=n;a++)
       faktoriyel=faktoriyel*a;
    cout<<faktoriyel;

    return 0;
}
