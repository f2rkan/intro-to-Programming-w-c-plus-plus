#include<iostream>

char * buildstr(char c, int n);

int main(void)
{
    using namespace std;
    
    int times;
    char ch;

    cout << "enter a times: "; cin >> times; 
    cout << "enter an integer: "; cin >> ch; 

    char * ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps; //free memory

    ps = buildstr('+', 5); //reuse pointer
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;

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