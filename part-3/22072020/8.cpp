#include<iostream>

int main(void)
{
    using namespace std;

    char first_date[] = {"La Vida Loca"};
    char second_date[] = {"Kaparoz"};
    string third_date = {"the bread bowl"};
    string fourth_date = {"hank's fine eats"};
    
    fourth_date = third_date;
    string sum = third_date + fourth_date;

    cout << first_date << ", " << second_date << ", " << third_date << ", " << fourth_date << endl;

    cout << endl << sum << endl;
    
    return 0;
}