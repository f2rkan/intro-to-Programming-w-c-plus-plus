//letter.cpp
#include<iostream>
const int Max = 15;
int letter(const char * str, char ch);
int main(void)
{
    using namespace std;
    char deneme[Max] = "ahmet";
    const char * c = "cahit";

    int n1 = letter(deneme, 'a');
    int n2 = letter(c, 'h');

    cout << n1 << " a characters in " << deneme << endl << n2 << " h characters in " << c << endl;

    return 0;
}
int letter(const char * str, char ch)
{
    int count = 0;
    while(*str)
    {
        if(*str == ch)
        count++;
        str++;
    }
    return count;
}