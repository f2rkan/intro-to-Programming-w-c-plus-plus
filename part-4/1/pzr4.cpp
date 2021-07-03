#include<iostream>

int letter(const char * str, char ch);
const int Max = 15;

int main(void)
{
    using namespace std;
    char d[Max] = "minimum";
    const char * f = "maximum";

    int sayac1 = letter(d, 'i');
    int sayac2 = letter(f, 'x');
 
    cout << sayac1 << " i characters in " << d << endl;
    cout << sayac2 << " x characters in " << f << endl;

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