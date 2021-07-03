#include<iostream>
using namespace std;

int main()
{
    int a=0,carp=1,topla=0;
    cout<<"sayiyi gir"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
        if(i%3==0 && i%5==0)
        carp=carp*i;
        else
            topla=topla+i;

        cout<<"carpim: "<<carp<<endl;
        cout<<"toplam: "<<topla<<endl;

return 0;

}
