#include<iostream>
#include<cstring>
const int ArSize = 10;

int main(void)
{
    using namespace std;

    cout << "ismini gir, harflerin ascii hallerini yazayim: ";
    char name[ArSize];
    cin >> name;

    for(int i = 0; i < strlen(name); i++)
    {
        cout << name[i] << ": " << (int)name[i] << endl;
    }

    cout << "Done.\n";

    return 0;
}