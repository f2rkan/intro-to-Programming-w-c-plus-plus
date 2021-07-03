#include<iostream>
int main(void)
{
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99;

    bats = (int) 19.99 + (int) 11.99; //old C syntax
    coots = 19.99 + double (11.99); //new C++ syntax
    cout << "auks= " << auks << ", bats: " << bats;
    cout << ", coots: " << coots << endl;

    char ch = 'Z';
    cout << "the code for " << ch << " is "; //print as char
    cout << int(ch) << endl; //print as int
    cout << "yes, the code is ";
    cout << static_cast<int>(ch) << endl;

    return 0;
}