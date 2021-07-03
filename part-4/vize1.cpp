#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    cout << "name: ";
    char name[20];
        cin.getline(name, 20);
    name[19] = '\0';

    cout << "surname: ";
    char surname[20];
        cin.getline(surname, 20);
    surname[19] = '\0';

    char full_name[40];
    strcpy(full_name, strcat(strcat(surname, ", "), name));

    cout << "total name: " << full_name << endl;

    return 0;
}