#include<iostream>
#include<cctype>
#include"example.h"

using namespace std;

int main(void)
{
    Stack st;
    char ch;

    Item po;

    cout << "giris icin a'ya; girdigini islemek icin p'ye; "
         << "cikis icin q'ya bas:\n";
    
    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
            continue;
        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':
                cout << "PO numarasini gir: ";
            cin >> po;
            if(st.isfull())
                cout << "stack dolu\n";
            else
                st.push(po);
                    break;
            case 'P':
            case 'p':
                if(st.isempty())
                    cout << "stack bos\n";
                else
               {     
                    st.pop(po);
                    cout << "PO #" << po << " popped.\n";
               }
                break;
        }
        cout << "giris icin a'ya; girdigini islemek icin p'ye; "
         << "cikis icin q'ya bas:\n";       
    }
    cout << "byE\n";
    return 0;
}