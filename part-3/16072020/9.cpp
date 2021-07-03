#include<iostream>

int main(void)
{
    using namespace std;

    string address, name;
    cout << "ismin ne: ";
        getline(cin, name);
    cout << "adresin ne: ";
        getline(cin, address);
    

    cout << "ismin: " << name << endl 
    << "adresin: " << address << endl;

    return 0;
}