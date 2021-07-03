#include<iostream>
using namespace std;

int main()
{
setlocale(LC_ALL,"Turkish");
int kenar1,kenar2,kenar3;
cout<<"kenar uzunluklarını giriniz"<<endl;
cin>>kenar1>>kenar2>>kenar3;
if(!(kenar1+kenar2>kenar3 && kenar1+kenar3>kenar2 && kenar2+kenar3>kenar1))
cout<<"bir ucgen olusturmaz";
else if(kenar1==kenar2 || kenar1==kenar3)
    cout<<"ikizkenar ucgen"<<endl;
else if(kenar1==kenar2 && kenar1==kenar3)
    cout<<"eskenar ucgen"<<endl;
else
    cout<<"cesitkenar ucgen"<<endl;

    return 0;


}
