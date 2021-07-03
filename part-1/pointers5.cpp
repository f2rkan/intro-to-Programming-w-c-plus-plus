#include<iostream>
using namespace std;

int main(void)
{
    int * intP, i = 5;
    float * floatP, f = 0.5;
    double * doubleP, d = 0.0005;
    char * charP, c = 'A';
    string * stringP, s("Hello World");
    void *voidP;
    
    intP = &i;
    floatP = &f;
    doubleP = &d;
    charP = &c;
    stringP = &s;

    voidP = intP;
        cout << voidP << endl;
    voidP = &intP;
        cout << voidP << endl;
    voidP = floatP;
        cout << voidP << endl;
    voidP = &floatP;
        cout << voidP << endl;
    voidP = doubleP;
        cout << voidP << endl;
    voidP = &doubleP;
        cout << voidP << endl;
    voidP = charP;
        cout << voidP << endl;
    voidP = &charP;
        cout << voidP << endl;
    voidP = stringP;
        cout << voidP << endl;
    voidP = &stringP;
        cout << voidP << endl;
    
    return 0;
}