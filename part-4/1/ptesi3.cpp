#include<iostream>
unsigned int letter(const char * str, char n);

int main(void)
{
    using namespace std;
    char deneme[15] = "minimum";
    const char * denem = "maximum";

    int s1 = letter(deneme, 'i');
    int s2 = letter(denem, 'x');

    cout << s1 << " i characters in " << deneme << endl;
    cout << s2 << " x characters in " << denem << endl;

    return 0;
}
unsigned int letter(const char * str, char n)
{
    unsigned int count = 0;
    while(*str)
    {
        if(*str == n)
        count++;
        str++;
    }
    return count;
}