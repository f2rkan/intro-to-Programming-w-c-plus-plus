#include<iostream>

int main(void)
{
    using namespace std;
    const int ArSize = 10;

    char name[ArSize];
    cout << "ismini gir, harflerin ascii numaralarini yazayim: ";
    cin >> name;
    int i = 0;
    while(name[i] != '\0')
    {
        cout << name[i] << ": " << (int)name[i] << endl;
        i++;
    }
    cout << "Done!" << endl;

    return 0;
}