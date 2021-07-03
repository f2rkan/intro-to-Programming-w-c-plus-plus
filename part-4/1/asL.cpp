#include<iostream>
const int Max = 15;
int letter(const char * str, char ch);

int main(void)
{
    using namespace std;
    char d[Max] = "minimum";
    const char *e = "maximum";

    unsigned int s1 = letter(d, 'm');
    unsigned int s2 = letter(e, 'n');

    cout << s1 << " m characters in " << d << endl;
    cout << s2 << " n characters in " << e << endl;

    return 0; 
}
int letter(const char * str, char ch)
{
    unsigned int count = 0;
    while(*str)
    {
        if(*str == ch)
        count++;
        str++;
    }
    return count;
}