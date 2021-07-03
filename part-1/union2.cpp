#include<iostream>

using namespace std;

struct
{
    char adi[50] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    char editor[50];
    
    union 
    {
        float euro;
        int lira;  
    };
}dergi;

int main(void)
{
    dergi.lira = 4;
    cout << dergi.lira << endl;
    cout << dergi.adi << endl;

    return 0;
}