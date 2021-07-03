#include<iostream>

int main(void)
{
    using namespace std;
    const int ArSize = 50;
    
    char f_name[ArSize];
    char l_name[ArSize];
    char letter;
    int age;

    cout << "What is your first name?\n";
        cin.getline(f_name, ArSize);
    cout << "What is your last name?\n";
        cin.getline(l_name, ArSize);
    cout << "What letter grade do you deserve?\n";
        cin >> letter;
    cout << "What is your age?\n";
        cin >> age;
    
    cout << "Name: " << l_name << ", " << f_name << endl;
    cout << "Grade: " << letter << endl;
    cout << "Age: " << age << endl;

    return 0;
}