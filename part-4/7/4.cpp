#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;

    cout << "enter your first name: ";
    char first_name[20];
    cin.getline(first_name, 20);
    first_name[19] = '\0';

    cout << "enter your last name: ";
    char last_name[20];
    cin.getline(last_name, 20);
    last_name[19] = '\0';
    
    char full_name[40];
    strcpy(full_name, strcat(strcat(last_name, ", "), first_name));

    cout << "iste iki char dizisinin tek char dizisinde birlestirilmis hali: "
         << full_name
         << endl;
    
    return 0;
}