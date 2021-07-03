#include<iostream>
using namespace std;
int main()
{
    int sayac=4,a=2,b=5;
    if(a>b || sayac++)
    {
        cout<<"if'e girildi"<<endl;
    }
    else
    {
        cout<<"else girildi"<<endl;
    }
            cout<<sayac;
}
