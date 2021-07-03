#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    char name[80];
    char surname[80];
    char sum[160];

    cout << "enter your name: ";
        cin.getline(name, 80);
    cout << "enter your surname: ";
        cin.getline(surname, 80);
    
    strcpy(sum, strcat(strcat(surname, ", "), name));

    cout << sum << endl;

    return 0;
}