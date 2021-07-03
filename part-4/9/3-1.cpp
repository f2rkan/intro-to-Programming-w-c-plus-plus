#include<iostream>

int main(void)
{
    using namespace std;
    char ch;
    cout << "a. ahmet\tb. mehmet\nc. ali\t\td. veli\nq. quit\n";
    cin >> ch;

    while(ch != 'q')
    {
        while(ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd')
        {
            cin.ignore(1000, '\n');
            cout << "enter a, b, c, d or q: ";
            cin >> ch;
        }
        switch(ch)
        {
            case 'a': cout << "ahmet bir isim." << endl;
                break;
            case 'b': cout << "mehmet bir isim." << endl;
                break;
            case 'c': cout << "ali bir isim." << endl;
                break;
            case 'd': cout << "veli bir isim." << endl;
                break;
        }
        cout << "next choice: ";
        cin >> ch;
    } 
    cout << "Bye." << endl;
    return 0;
    
}