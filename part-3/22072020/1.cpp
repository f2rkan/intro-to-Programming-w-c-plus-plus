#include<iostream>
#include<cstring>

int main(void)
{
    using namespace std;
    const int Size = 15;
    char name1[Size]; //boş dizi
    char name2[Size] = "C++owboy"; //baslatılmıs dizi

    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";

    cin >> name1;

    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "name2'nin ilk 3 harfi: " << name2 << endl;

    return 0;
}