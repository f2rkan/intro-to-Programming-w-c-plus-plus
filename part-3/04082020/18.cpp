#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char x[25] = "ahmet";
    cout << "x: " << x << endl;

    strcat(x, " ali");
    cout << "strcat(x,  ali): " << x << endl;


    cout << endl << endl;
    strncat(x, " veli deli", 10);
    cout << "\"strncat(x,  veli deli, 25)\": "  << x << endl;

    return 0;
}