#include<iostream>

char * buildstr(char c, int n);
int main(void)
{
    using namespace std;
    int times;
    char ch;

    cout << "enter an integer: "; cin >> times;
    cout << "enter a character: "; cin >> ch;

    char * ps = buildstr(ch, times);
    cout << ps << endl;
    delete[]ps;
    ps = buildstr('+', 3);
    cout << ps << "-DONE-" << ps << endl;
    delete[]ps;

    return 0;
}
char * buildstr(char c, int n)
{
    char * pstr = new char[n+1];
    pstr[n] = '\0';
    for(int i = 0; i < n; i++)
    pstr[i] = c;

    return pstr;
}