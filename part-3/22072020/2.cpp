#include<iostream>
#include<cstring>

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    const int Size = 25;
    char name[Size];
    char name2[Size + 1] = "ahmet";

    cout << "merhaba, ben " << name2 << " simdi sana gelelim; senin adin nedir: ";
    cin.getline(name, Size);

    cout << "OK\nSenin ismini analiz ediyoruz simdi.\n";
    cout << "Senin adin, ""\"" << name << "\"" << ";\n";
    cout << strlen(name) << " harf iceriyor\n";
    cout << "isminin ilk 3 harfi: ";
    name[3] = '\0';
    cout << name << "\n";
    cout << "isminin ilk harfi: ";
    name[1] = '\0';
    cout << name << "\n";
    cout << "isminin bellekte kapladigi alan: " << sizeof(name) << " bytes\n";


    return 0;

}