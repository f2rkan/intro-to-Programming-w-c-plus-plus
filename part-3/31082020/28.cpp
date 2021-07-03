#include<iostream>
#include<cctype>

int main(void)
{
    using namespace std;
    char ch;

    int chars = 0;
    int digits = 0;
    int whitespaces = 0;
    int puncts = 0;
    int others = 0;
    int graphs = 0;
    cout << "text girisine basla --@ girersen program sonlanir: ";

    cin.get(ch);
    while(ch != '@')
    {
        if(isdigit(ch)) digits++;
        else if(ispunct(ch)) puncts++;
        else if(isalpha(ch)) chars++;
        else if(isspace(ch)) whitespaces++;
        else if(isgraph(ch)) graphs++;
        else others++;

        cin.get(ch);
    }

    cout << "chars: " << chars << "\ndigits: " << digits << "\npuncts: " << puncts << "\nwhitespace: " << whitespaces << endl
         << "graphs: " << graphs << endl;

    return 0;
}