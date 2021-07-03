#include<iostream>
#include<cctype>

int main(void)
{
    using namespace std;

    char c; cin >> c;
    
    while(c != 'q' && c != 'Q')
    {
        c = toupper(c);
        switch(c)
        {
            
            case 'A' : cout << "A harfi girdin.\n";
                break;
            case 'B' : cout << "B harfi girdin.\n";
                break;
            case 'C' : cout << "C harfi girdin.\n";
                break;
            case 'D' : cout << "D harfi girdin.\n";
                break;    

            default : cout << "tanimsiz: ";
        }
        cin >> c;
       
    }

    cout << "bye" << endl;
    return 0;
}