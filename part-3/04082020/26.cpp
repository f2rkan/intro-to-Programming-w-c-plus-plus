#include<iostream>
#include<array>
#include<cstring>
using namespace std;

int main(void)
{
    char o1[15];
    char o2[13] = "cheeseburger";
    strncpy(o1, o2, strlen(o2) + 1);
    cout << o1 << endl;
 
    return 0; 
}