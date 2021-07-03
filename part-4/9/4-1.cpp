#include<iostream>

using namespace std;
const int strsize = 20;
const int ListLength = 5;

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main(void)
{
    bop list[ListLength] =
    {
        {"omer furkan sagir", "ogrenci", "reis", 2},
        {"tarkan tevetoglu", "singer", "MEGASTAR", 2},
        {"devran caglar", "singer", "fantazi arabesk", 0},
        {"cengiz kurtoglu", "singer", "farketmez artik", 2},
        {"efe karahanli", "child", "polat", 1}
    };

    cout << "a. display by fullname\t\tb.display by title" << endl
         << "c. display by bopname\t\td. display by preference"
         << endl
         << "q. quit" << endl;
    char ch;
    cin >> ch;

    while(ch != 'q')
    {
        while(ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd')
        {
            cin.ignore(1000, '\n');
            cout << "enter a, b, c, d or q: ";
            cin >> ch;

            if(ch == 'q') goto end_of_program;
        }
        switch(ch)
        {
            case 'a': for(int i = 0; i < ListLength; i++)
            {
                cout << list[i].fullname << endl;
            }
                break;
            case 'b': for(int i = 0; i < ListLength; i++)
            {
                cout << list[i].title << endl;
            }
                break;
            case 'c': for(int i = 0; i < ListLength; i++)
            {
                cout << list[i].bopname << endl;
            }
                break;
            case 'd': for(int i = 0; i < ListLength; i++)
            {
                switch(list[i].preference)
                {
                    case 0: cout << list[i].fullname << endl;
                        break;
                    case 1: cout << list[i].title << endl;
                        break;
                    case 2: cout << list[i].bopname << endl;
                        break;
                }
            }
            break;
        }
        cout << "Next choice: ";
        cin >> ch;
    }
    end_of_program:
    cout << "bye." << endl;

    return 0;

}