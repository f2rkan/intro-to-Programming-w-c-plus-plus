#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;
    char charr[20];
    string str;

    cout << "charr uzunlugu: ";
        cout << strlen(charr) << endl;
    cout << "str'nin uzunlugu: ";
        cout << str.size() << endl;
    cout << "charr'i doldur: ";
        cin.getline(charr, 20);
    cout << "str'yi doldur: ";
        getline(cin, str);
    
    cout << "str: " << str << endl;
    cout << "charr: " << charr << endl;

    cout << "charr uzunlugu: " << strlen(charr) << endl;
    cout << "strr uzunlugu: " << str.size() << endl;

    return 0;
}