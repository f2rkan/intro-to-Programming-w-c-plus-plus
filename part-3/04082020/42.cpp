#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char d[20];
    char d2[20];
    char fullname[40];

    cout << "name: ";
        cin.getline(d, 20);
    cout << "surname: ";
        cin.getline(d2, 20);
    
    strcpy(fullname, strcat(strcat(d, "-"), d2));

    cout << "fullname: " << fullname << endl;

    return 0;
}