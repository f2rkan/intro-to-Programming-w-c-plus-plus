#include<iostream>
char * buildstr(char c, int n); //prototype
int main(void)
{
    using namespace std;
    int time;
    char ch;

    cout << "enter a character: ";
    cin >> ch;
    cout << "enter an integer: ";
    cin >> time;

    char * ps = buildstr(ch, time);
    cout << ps << endl;
    delete [] ps; //free memory
    ps = buildstr('+', 20); //reuse pointer
    cout << ps << " -DONE- " << ps << endl;
    delete [] ps; //free memory

    return 0;
}
char * buildstr(char c, int n)
{
    char * pstr = new char[n+1];
    pstr[n] = '\0'; //terminate string
    while(n-- > 0)

    pstr[n] = c; //fill rest of string
    return pstr;
}