#include<iostream>
#include<string>

int main(void)
{
    using namespace std;
    cout << "what is your first name: ";
    string first_name;
    getline(cin, first_name);

    cout << "what is your last name: ";
    string last_name;
    getline(cin, last_name);

    string full_name = (last_name + ", ") + first_name;

    cout << "iste iki string dizisinin tek string dizisinde birlesimi: "
         << full_name
         << endl;
    
    return 0;
}