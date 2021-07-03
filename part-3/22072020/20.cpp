#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char charr1[20];
    char charr2[20] = "jaguar";

    

    strncpy(charr1, charr2, strlen(charr2) + 1);

    cout << charr1 << endl;
    cout << strlen(charr1) << endl;

    return 0;
}