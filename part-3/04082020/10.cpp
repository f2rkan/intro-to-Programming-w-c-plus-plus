#include<iostream>

int main(void)
{
    using namespace std;

    char flower[10] = "rose";
    flower[3] = '\0';
    cout << flower << "s are red\n";

    return 0;
}