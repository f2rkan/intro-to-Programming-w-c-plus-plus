#include<iostream>

int main(void)
{
    using namespace std;

    string str = "?eneme";
    string s;

    int sayim = 0;
    for(s = "a"; str != "deneme"; s[0]++)
    {
        cout << str << endl;
        str[0] = s[0];
        sayim++;
    }

    cout << sayim << " dongu sonrasinda ulasilan kelime: " << str << endl;

    return 0;
}