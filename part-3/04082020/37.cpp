#include<iostream>

using namespace std;

int main(void)
{
    string name, surname;
    char letter;
    int age;

    cout << "what is your first name? ";
        getline(cin, name);
    cout << "what is your last name? ";
        getline(cin, surname);
    cout << "what letter grade do you deserve? ";
        cin >> letter;
    cout << "what is your age? ";
        cin >> age;
    
    cout << "name: " << surname << ", " << name << endl;
    cout << "grade: " << letter << endl;
    cout << "age: " << age << endl;

    return 0;
}