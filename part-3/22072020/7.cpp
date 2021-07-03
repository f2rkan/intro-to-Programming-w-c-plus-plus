//using string
#include<iostream>
#include<string>

int main(void)
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";

    string str1, str2 = "panther";

    cout << "enter a kind of feline: ";
        cin >> charr1;
    cout << "enter another kind of feline: ";
        cin >> charr2;
    cout << "here are some felines:\n";
    cout << charr1 << " " << charr2 << " is"
         << charr2[2] << endl;
    
    cout << "the third letter in " << str2 << " is "
         << str2[2] << endl;
    
    
    return 0;
}