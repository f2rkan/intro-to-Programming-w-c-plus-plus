#include<iostream>

int main(void)
{
    using namespace std;

    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')
    {
        if(ch == ' ') ++spaces;
        
        ++total;
        cin.get(ch);
    }

    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";

    return 0;
}