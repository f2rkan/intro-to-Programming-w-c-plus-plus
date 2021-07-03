#include<iostream>

int main(void)
{
    using namespace std;

    cout << "enter the starting countdown value: ";
    int limit;
    cin >> limit;

    int i;
    for(i = limit; i; i--)
        cout << "i = " << i << "\n";
    
    cout << "done, now that i = " << i << "\n";

    return 0;
}