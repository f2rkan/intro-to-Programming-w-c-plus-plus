#include<iostream>

int main(void)
{
    using namespace std;

    char ch;
    int count = 0;

    cout << "karakter girisi yap; # girersen program sonlanir: ";
    cin.get(ch);

    while(ch != '#')
    {
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";

    return 0;
}