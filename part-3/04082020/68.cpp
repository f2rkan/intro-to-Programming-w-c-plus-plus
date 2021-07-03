#include<iostream>
#include<string>


int main(void)
{
    using namespace std;

    string str = "?eneme";
    

    string s;

    for(s = "a"; str != "deneme"; s[0]++)
    {
        cout << str << endl;
        str[0] = s[0];
    }

    cout << "aranilan kelime: " << str << endl;

    return 0;
}