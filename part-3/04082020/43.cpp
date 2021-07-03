#include<iostream>

int main(void)
{
    using namespace std;

    string name, surname, fullname;

    cout << "name: "; getline(cin, name);
    cout << "surname: "; getline(cin, surname);

    cout << "fullname: ";

    fullname = surname + ", " + name;

    cout << fullname << endl;

    return 0;
}