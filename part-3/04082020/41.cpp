#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char name[30];
    char surname[40];
    char full_name[70];

    cout << "enter your name: ";
        cin.getline(name, 30);
    cout << "enter your surname: ";
        cin.getline(surname, 40);
    strcpy(full_name, strcat(strcat(surname, ", "), name));

    cout << full_name << endl;

    return 0;
}