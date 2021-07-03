#include<iostream>

int main(void)
{
    using namespace std;

    char ch;
    int space = 0;
    int total = 0;

    cout << "kelime girisi yap: ";
    cin.get(ch);
    while(ch != '.')
    {
        if(ch == ' ') ++space;
             ++total;
        cin.get(ch);
    }

    cout << "bosluk, " << space << "; kelime, " << total << endl;

    return 0;
}