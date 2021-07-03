#include<iostream>
#include<cctype>

int main(void)
{
    using namespace std;
    char quit = '@';
    char ch;
    cout << "metin ya da sozcuk girisi yap, \"@\" girisi programi sonlandirir.\n";

    cin.get(ch);
    while(cin.good() && ch != '@')
    {
        if(isdigit(ch))
        {
            cin.ignore(1000, '\n');
            cin.get(ch);
        }
        else if(isupper(ch))
            ch = tolower(ch);
        else if(islower(ch))
            ch = toupper(ch);

        cout << ch;
        cin.get(ch);
    }
    cout << "bYe" << endl;
    
    return 0;
}