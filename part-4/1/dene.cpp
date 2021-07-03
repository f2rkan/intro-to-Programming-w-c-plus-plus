#include<iostream>
using namespace std;
const int Max = 15;
int letter(const char * str, char ch);
int main(void)
{
    
    char m[Max] = "minimum";
    const char * n = "maximum";

    unsigned int n1 = letter(m, 'm');
    unsigned int n2 = letter(n, 'a');

    cout << n1 << " m characters in " << m << endl;
    cout << n2 << " n characters in " << n << endl;
    

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