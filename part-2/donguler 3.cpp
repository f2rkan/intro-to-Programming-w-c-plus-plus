#include<iostream>
using namespace std;

int main()
{
int answer;
cout<<"how old is bucky?"<<endl;
cin>>answer;
if(answer==21)
    cout<<"yep";
else if(answer<21)
    cout<<"under";
else
    cout<<"over";

return 0;
}
