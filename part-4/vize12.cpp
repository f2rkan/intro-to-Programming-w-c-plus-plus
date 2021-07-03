#include<iostream>
#include<string>

using namespace std;
void stringToUpper(string & str);
int main(void)
{
    cout << "enter a string (q to quit): ";
    string str;
    getline(cin, str);

    while(str != "q")
    {
        stringToUpper(str);
        cout << str << endl;
        cout << "enter a string (q to quit): ";
        getline(cin, str);
    }
    return 0;
}

void stringToUpper(string & str)
{
    for(int i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);
}
