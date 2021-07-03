#include<iostream>
int letter(const char * str, char ch);
const int Max = 15;
int main(void)
{
    using namespace std;
    char d[Max] = "minimum";
    const char * e = "maximum";

    unsigned int n1 = letter(d, 'i');
    unsigned int n2 = letter(e, 'x');

    cout << n1 << " i characters in " << d << endl;
    cout << n2 << " x characters in " << e << endl;

    cin.get();
    return 0;
}    
int letter(const char * str, char ch)
{
    unsigned int count;
    while(*str)
    {
        if(*str == ch)
        count++;
        str++;
    }
    return count;
}