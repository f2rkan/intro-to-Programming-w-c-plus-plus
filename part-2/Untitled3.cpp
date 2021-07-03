#include<iostream>
using namespace std;

int main()
{
    double a,b;
    cout<<"birinci sayiyi gir"<<endl;
    cin>>a;
    cout<<"ikinci sayiyi gir"<<endl;
    cin>>b;
    if(a>b)
        cout<<a<<" sayisi buyuktur."<<endl;
    else if(a==b)
        cout<<"sayilar esit."<<endl;
    else
        cout<<b<<" sayisi buyuk"<<endl;

    return 0;
}
