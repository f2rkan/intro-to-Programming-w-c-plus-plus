#include<iostream>
#include<cctype>

int main(void)
{
    using namespace std;

    cout << "text girisi yap, @ girersen program sonlanir.\n";

    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while(ch != '@')
    {
        if(isalpha(ch)) chars++;
        else if(isspace(ch)) whitespace++;
        else if(isdigit(ch)) digits++;
        else if(ispunct(ch)) punct++;
        else others++;

        cin.get(ch);
    }
    cout << "char: " << chars
    << "\nspace: " << whitespace
    << "\ndigit: " << digits
    << "\npunct: " << punct
    << "\nothers " << others << endl;

    return 0;
}