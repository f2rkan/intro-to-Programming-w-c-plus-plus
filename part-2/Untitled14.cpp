#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
