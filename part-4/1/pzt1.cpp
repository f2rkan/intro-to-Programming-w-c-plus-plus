#include<iostream>
int letter(const char * str, char ch);
const int Max = 15;
int main(void)
{
    using namespace std;
    char d[Max] = "minimum";
    const char * c = "maximum";

    int cs = letter(c, 'm');
    int ds = letter(d, 'n');

    cout << ds << " n characters in " << d << endl;
    cout << cs << " m characters in " << c << endl;

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