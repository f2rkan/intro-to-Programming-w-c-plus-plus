#include<iostream>

int main(void)
{
    using namespace std;

    char ch;
    int count = 0;
    cout << "enter characters; enter # to quit:\n";

    cin >> ch;
    while(ch != '#')
    {
        cout << ch << endl;
        count++;
        cin >> ch;
    }

    cout << endl << count << " characters read\n";

    return 0;
}