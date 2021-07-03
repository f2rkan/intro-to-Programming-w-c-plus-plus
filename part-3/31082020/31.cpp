#include<iostream>

int main(void)
{
    using namespace std;

    const char x[2][20] = {"Jason "," at your service\n"};
    const char * y = "quillstone";

    for(int i = 0; i < 3; i++)
        cout << ((i < 2) ? !i ? x[i] : y : x[1]);
    
    return 0;
}