#include<iostream>

int main(void)
{
    using namespace std;
    
    string str = "?ate";

    string s = "a";

    int sayim = 0;

    while(str != "cate")
    {
        cout << str << endl;
        str[0] = s[0];
        s[0]++;
        sayim++;
    }
    

    cout << sayim << " dongu sonrasinda ulasilan kelime: " << str << endl;
    return 0;
}