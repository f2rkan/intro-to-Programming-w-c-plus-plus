#include<iostream>
using namespace std;
int main() 
{
int a,b,c,n;
cout<<"Enter a Number: ";
cin>>n;

for(a=1;a<=n;a++)
{
    for(b=a;b<n;b++)
    {
        cout<<" ";
    }
        for(c=1;c<=a;c++)
        {
            cout<<"/ ";
        }
    cout<<endl;
}

}