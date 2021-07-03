#include<iostream>
const int Max = 15;
int letter(const char * str, char ch);

int main(void)
{
    using namespace std;
    char m[Max] = "minimum";
    const char * n = "maximum";

    unsigned int sayac1 = letter(m, 'm');
    unsigned int sayac2 = letter(n, 'n');

    cout << sayac1 << " m characters in " << m << endl;
    cout << sayac2 << " n characters in " << n << endl;

    return 0;
}
int letter(const char * str, char ch)
{
    unsigned int count  = 0;
    while(*str)
    {
        if(*str == ch)
        count++;
        str++;
    }
    return count;
}
