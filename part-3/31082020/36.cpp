#include<iostream>

enum {red, orange, yellow, green, blue, violet, indigo};

int main(void)
{
    using namespace std;

    cout << "enter color code (0-6): ";
        int code;
        cin >> code;
    
    while(code >= red && code <= indigo)
    {
        switch (code)
        {
            case red : cout << "her lips were red.\n";
                break;
            case orange : cout << "her hair was orange.\n";
                break;
            
        }
        cout << "enter color code (0-6): ";
        cin >> code;
    }
    cout << "bye!\n";
    return 0;
}