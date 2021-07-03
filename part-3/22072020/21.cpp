#include<iostream>
#include<string>
#include<cstring>

int main(void)
{
    using namespace std;

    char charr[20];
    string str;

    cout << "girdi almadan once charr uzunlugu: "
         << strlen(charr) << endl;
    
    cout << "girdi almadan once str uzunlugu: "
         << str.size() << endl;
    
    cout << "charr: ";
        cin.getline(charr, 20);
    cout << "charr: " << charr << endl;
    cout << "str: ";
        getline(cin, str);
    cout << "metin: " << str << endl;
    
    cout << "girdi sonrası charr uzunlugu: "
         << strlen(charr) << endl;
    cout << "girdi sonrasi str uzunlugu: "
         << str.size() << endl;
    
    return 0;
}