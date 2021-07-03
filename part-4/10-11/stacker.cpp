#include<iostream>
#include<cctype>
#include"stack.h"

using namespace std;

int main(void)
{
    Stack st;
    char ch;
    Item po;

    cout << "siparis vermek icin A'ya bas\n"
         << "PO'yu islemek icin P'ye bas; Q for quit: ";
        
    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
            continue;
        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
            case 'A':
            case 'a': 
                cout << "enter a PO number to add: ";
                cin >> po;
                if(st.isfull())
                    cout << "stack dolmuss\n";
                else
                    st.push(po);
                break;
            case 'P':
            case 'p':
                if(st.isempty())
                    cout << "stack hala bos\n";
                else
                {
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                }
                    break;
        }
        cout << "siparis vermek icin A'ya bas\n"
         << "PO'yu islemek icin P'ye bas; Q for quit: ";
    }
    cout << "bye.\n";
    return 0;
}