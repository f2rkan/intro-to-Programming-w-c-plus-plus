#include<iostream>
using namespace std;

int main(void)
{
    int i;
    double d;
    float f;
    char c;
    int * ip;
    double * dp;
    float * fp;
    char * cp;

    cout << "int i = " << sizeof(i) << " byte" << endl;
    cout << "double d = " << sizeof(d) << " byte" << endl;
    cout << "float f = " << sizeof(f) << " byte" << endl;
    cout << "char c = " << sizeof(c) << " byte" << endl;
    cout << endl;
    cout << "int *ip = " << sizeof(ip) << " byte" << endl;
    cout << "double *dp = " << sizeof(dp) << " byte" << endl;
    cout << "float *fp = " << sizeof(fp) << " byte" << endl;
    cout << "char *cp = " << sizeof(cp) << " byte" << endl;

    return 0;
}