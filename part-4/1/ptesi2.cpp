#include<iostream>
//function prototype
char * letter(char ch, int n);
//l3t5 90
int main(void)
{
    using namespace std;
    char c; int n;
    cout << "enter a character: "; cin >> c;
    cout << "enter an integer: "; cin >> n;

    char * ps = letter(c, n);
    cout << ps << endl;
    delete [] ps;
    ps = letter('-', 5);
    cout << ps << "+DONE+" << ps << endl;
    delete [] ps;

    return 0;    
}
char * letter(char ch, int n)
{
    char * pstr = new char[n+1];
    pstr[n] = '\0';
    while(n-- > 0) 
    pstr[n] = ch;

    return pstr;
}