#include<iostream>
#include<cctype>

int main(void)
{
    using namespace std;

    char ch;
    cin >> ch;
    ch = toupper(ch);
    cout << ch;
    return 0;
}