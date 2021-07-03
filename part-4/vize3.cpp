#include<iostream>
using namespace std;
int main(void)
{
    int a, b;
    cout << "sayi 1: "; 
        cin >> a;
    cout << "sayi 2: ";
        cin >> b;
    int tot = 0;
    if(a > b)
    {
        for(int i = b + 1; i < a; i++)
            {tot += i;}
        cout << tot << endl;
    }
    else
    {
        for(int i = a + 1; i < b; i++)
        {
            tot += i;
        }
        cout << tot << endl;
    }
    
    cout << "bye." << endl;

    return 0;
}